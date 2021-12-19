#include <iostream>
#include "../include/Game.h"

int main(int argc, char** argv){
	Game game;
	if (game.Initialize() != 0) {
		std::cout << "Game error" << std::endl;
		return 127;
	}
	return game.Run();
}
