#include <iostream>
#include <SDL.h>
#include "../include/Game.h"

uint8_t Game::Run() {
	while (true) {
		std::cout << "Game is running" << std::endl;
	}
}

Game::Game() {}

uint8_t Game::Initialize() {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 127;
	}
	return 0;
}

Game::~Game() {
	SDL_Quit();
}