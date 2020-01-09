#pragma once

#ifndef Game_h
#define Game_h
#include "SDL.h"
#include <stdio.h>
#include <iostream>
#include "SDL_image.h"


class Game
{

public:
	// Constructor
	Game();

	// Destructor
	~Game();

	void init(const char* title, int width, int height, bool fullscreen);
	
	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

	static SDL_Renderer *renderer;

private:
	bool isRunning;
	int count = 0;
	SDL_Window* window;

};

#endif /* Game_hpp */
