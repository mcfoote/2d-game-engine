
#ifndef Game_hpp
#define Game_hpp

#include "SDL.h"
#include <stdio.h>

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void handeleEvents();
	void update();
	void render();
	void clean();

	bool running();

private:

};

#endif /* Game_hpp */