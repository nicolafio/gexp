#include "stdio.h"
#include "SDL.h"
#include "main.h"

#define WINDOW_WIDTH  1280
#define WINDOW_HEIGHT 720

SDL_Window   *window;
SDL_Renderer *renderer;

int main()
{
    init();

    atexit(cleanup);

    SDL_Event event;

    while (1)
    {
        SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
    	SDL_RenderClear(renderer);

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT) return 0;
        }

        update();

        SDL_RenderPresent(renderer);
        SDL_Delay(16);
    }
}

void init()
{
    if (SDL_Init(SDL_INIT_VIDEO))
    {
        printf("Couldn't initialize SDL: %s\n", SDL_GetError());
        exit(1);
    }

    int w = WINDOW_WIDTH;
    int h = WINDOW_HEIGHT;
    int flags = 0;

    if (SDL_CreateWindowAndRenderer(w, h, flags, &window, &renderer))
    {
        printf("Failed to open window: %s\n", SDL_GetError());
        exit(1);
    }
}

void update()
{

}

void cleanup()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
