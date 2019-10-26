#pragma once

#ifndef Game_h
#define Game_h
#include "SDL.h"
#include <stdio.h>
#include <iostream>

class Game
{

public:
	// Constructor
	Game();

	// Destructor
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }



private:
	bool isRunning;
	int count = 0;
	SDL_Window* window;
	SDL_Renderer* renderer;



};

#endif /* Game_hpp */
