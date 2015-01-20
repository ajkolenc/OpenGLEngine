#include "Framework.h"

#include <stdlib.h>

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <glm/glm.hpp>
#include <SDL/SDL.h>

SDL_Window* window;
SDL_GLContext glContext;
bool quit = false;

void InitSDL(){
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(
		"Window",
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED,
		1024,
		768,
		SDL_WINDOW_OPENGL
	);
	SDL_SetWindowFullscreen(window, 0);

	glContext = SDL_GL_CreateContext(window);
}


void init(){
	//std::cout << "Testing 123" << std::endl;
	glClearColor(0, 0, 0, 1.0f);
}

void checkInput(){
	SDL_Event event;

	while (SDL_PollEvent(&event)){
		if (event.type == SDL_QUIT){
			quit = true;
		}
	}
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	

	SDL_GL_SwapWindow(window);
}

void reshape(int w, int h) {

}


int main(int argc, char** args){
	InitSDL();
	init();

	while (!quit){
		checkInput();
		display();
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}