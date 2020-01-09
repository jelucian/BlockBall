#include "GameObject.h"
#include "TextureManager.h"
#include "GameObject.h"

// Constructor, creates an object
GameObject::GameObject(const char* texturesheet, int x, int y) {

	objTexture = TextureManager::LoadTexture(texturesheet);
	
	// Initial positions
	xpos = x;
	ypos = y;

}

// Movement and behavior
void GameObject::Update() {
	xpos++;
	ypos++;

	srcRect.h = 260;
	srcRect.w = 290;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w / 2;
	destRect.h = srcRect.h / 2;


}

// Draws texture
void GameObject::Render() {
	SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}