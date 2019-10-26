#include "SDL.h"
#include "Game.h"

Game* game = nullptr;

int main(int argc, char* argv[]) {

	/*
	// Draw a green window for 3 seconds
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(3000);
	*/
	// Game Loop
	// while game running
	//		handle user input
	//		update all objects
	//		render changes to display

	game = new Game();
	game->init("Block Ball", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, 800, 600, true);

	while (game->running()) {
		game->handleEvents();
		game->update();
		game->render();

	}

	game->clean();

	return 0;
}