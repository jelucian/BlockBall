#pragma once

#include "Game.h"

// Texture manager for SDL game images
class TextureManager {

public:
	static SDL_Texture* LoadTexture(const char* fileName);

};