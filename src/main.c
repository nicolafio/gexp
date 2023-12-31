#include "stdio.h"
#include "SDL.h"
#include "main.h"
#include "stdbool.h"

#define WINDOW_WIDTH  1280
#define WINDOW_HEIGHT 720
#define GAME_LOOP_MINIMUM_FRAME_TIME_MILLISECONDS 8

SDL_Window   *window;
SDL_Renderer *renderer;
bool         quit = false;

int main()
{
    init();

    atexit(cleanup);

    SDL_Event e;

    while (!quit)
    {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    	SDL_RenderClear(renderer);

        while (!quit && SDL_PollEvent(&e))
        {
            event(&e);
        }

        update();

        SDL_RenderPresent(renderer);
        SDL_Delay(GAME_LOOP_MINIMUM_FRAME_TIME_MILLISECONDS);
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

void event(SDL_Event *e)
{
    int type = e->type;

    if (type == SDL_QUIT)
    {
        quit = true;;
        return;
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
