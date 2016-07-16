#include <windows.h>
#include <string>
#include <assert.h>
#include <process.h>

#include "SAMPFUNCS_API.h"
#include "game_api\game_api.h"

SAMPFUNCS *SF = new SAMPFUNCS();

void CALLBACK mainloop()
{
	static bool init = false;
	if (!init)
	{
		if (GAME == nullptr)
			return;
		if (GAME->GetSystemState() != eSystemState::GS_PLAYING_GAME)
			return;
		if (!SF->getSAMP()->IsInitialized())
			return;
		SF->getSAMP()->getChat()->AddChatMessage( D3DCOLOR_XRGB( 0, 0xAA, 0 ), "SAMPFUNCS Plugin loaded." );

		init = true;
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReasonForCall, LPVOID lpReserved)
{
	switch (dwReasonForCall)
	{
		case DLL_PROCESS_ATTACH:
			SF->initPlugin(mainloop, hModule);
			break;
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
}
