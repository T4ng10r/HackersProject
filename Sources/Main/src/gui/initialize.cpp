#include "SDL.h"
#include <Tools/loggers.h>

namespace gui {

void initialize_gui()
{

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printLog(eDebug, eErrorLogLevel, std::string("SDL_Init Error")+SDL_GetError());
	}
}
}
