#ifndef SYSTEM_H
#define SYSTEM_H
#include <SDL.h>
#include <SDL_mixer.h>


//Ansvarig för huvudloopen, hanterar input, och kontrollerar spelets övergripande logik.

namespace GEngine{

    struct System {
        System();
        ~System();

        SDL_Window* win;
        SDL_Renderer* ren;
        Mix_Chunk* music;
        SDL_Texture* pfTex;
        SDL_Surface* pfSurf;
    };

    extern System sys;

}

#endif