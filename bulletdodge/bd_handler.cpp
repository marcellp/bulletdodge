#include "bulletdodger.hpp"

uint8_t ratio = 0;

static bool str_to_int(char *str, int *val, int base)
{
	char *tmp;

	errno = 0;
	*val = strtol(str, &tmp, 10);

	if (tmp == str || *tmp != '\0' || ((*val == LONG_MIN || *val == LONG_MAX) && errno == ERANGE))
		return false;
	else
		return true;
}

void bulletdodge_do(char *arg)
{
	int amount;
	
	if (!str_to_int(arg, &amount, 10))
		return pprintf("Invalid amount.");

	if (amount < 0 || amount > 100)
		return pprintf("Invalid amount (must be between 0 and 100).");

	ratio = amount;
	
	pprintf("Ratio of blocked packets set to %d percent.", ratio);
}

bool CALLBACK bd_packet(stRakNetHookParams *params)
{
	// Yes, it's biased. It doesn't really matter, since it's only a rough estimate.
	uint8_t random = 1 + (rand() % 100);

	if (params->packetId != PacketEnumeration::ID_BULLET_SYNC)
		return true;

	if (random > ratio)
		return true;
	else
		return false;
}