#pragma once

#define PROGRAM_NAME "bulletdodge"
#define PROGRAM_VERSION "1.0"
#define PROGRAM_AUTHORS "Marcell Pek"
#define PROGRAM_WEBSITE "http://marcellp.net"
#define PROGRAM_BUGREPORT_EMAIL "marcellp0+bulletdodge@gmail.com"
#define HELP_OPTION_DESCRIPTION \
  "\t/bulletdodge help\n\t\tdisplay this help and exit\n"
#define VERSION_OPTION_DESCRIPTION \
  "\t/bulletdodge version\n\t\toutput version information and exit\n"

#include <assert.h>
#include <windows.h>
#include <string>
#include <process.h>
#include <time.h>

#include "SFAPI\SAMPFUNCS_API.h"
#include "game_api\game_api.h"

#include "main.hpp"
#include "bd_handler.hpp"
