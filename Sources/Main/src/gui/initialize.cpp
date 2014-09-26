#include "SDL.h"
#include <Tools/loggers.h>

namespace gui {

void initialize_gui()
{

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printLog(eDebug, eErrorLogLevel, std::string("SDL_Init Error")+SDL_GetError());
		return;
	}
	SDL_Window * win = SDL_CreateWindow("Hello World!!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if (win == nullptr) {
		printLog(eDebug, eErrorLogLevel, std::string("SDL_CreateWindow Error")+SDL_GetError());
		SDL_Quit();
		return;
	}

	SDL_Renderer * ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren==nullptr) {
		SDL_DestroyWindow(win);
		printLog(eDebug, eErrorLogLevel, std::string("SDL_CreateWindow Error")+SDL_GetError());
		SDL_Quit();
		return;
	}
}
}
