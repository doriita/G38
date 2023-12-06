/*#include "System.h"
#include "Constants.h"
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> 
#include <SDL2/SDL_ttf.h>

using namespace std;

//Ansvarig för huvudloopen, hanterar input, och kontrollerar spelets övergripande logik.
namespace GEngine{

    System::System() {

        win = SDL_CreateWindow("Window", 100, 100, 800, 600, 0);
	    ren = SDL_CreateRenderer(win, -1, 0);  
        pfSurf = IMG_Load( (constants::gResPath + "images/platform.png").c_str() );
	    pfTex = SDL_CreateTextureFromSurface(ren, pfSurf);
	    Mix_OpenAudio(20050, AUDIO_S16SYS, 2, 4096); //Buffertstorleken kan behövas minskas om man vill ha snabba ljud som tex skott 
        music = Mix_LoadWAV("c:/någon/sokvag.wav");
        Mix_PlayChannel(-1, music, -1);//På vilken kanal, vilken låt, cihur många upprepningar(-1 är om o om igen.)
        SDL_FreeSurface(pfSurf);

	    cout << "End Program using the application\'s windows menu \"quit\" or just close the window!" << endl;

	// Loop till dess att programmet avslutas! I session?
	bool running = true;
	while (running) {
		SDL_Event e;
		if (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				running = false;
			}
		}

		SDL_RenderClear(ren);
		SDL_RenderCopy(ren, pfTex, NULL, NULL);
		SDL_RenderPresent(ren);
	}
          
    }
    
    System::~System(){
        Mix_FreeChunk(music);
        SDL_DestroyTexture(pfTex);
	    SDL_DestroyRenderer(ren);
	    SDL_DestroyWindow(win);

	    TTF_Quit();
	    SDL_Quit();
    }
}*/