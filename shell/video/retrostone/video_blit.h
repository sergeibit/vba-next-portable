#ifndef VIDEO_BLIT_H
#define VIDEO_BLIT_H

#include <SDL/SDL.h>

#define HOST_WIDTH_RESOLUTION (sdl_screen->w)
#define HOST_HEIGHT_RESOLUTION (sdl_screen->h)

#define MENU_WIDTH_RESOLUTION (320)
#define MENU_HEIGHT_RESOLUTION (240)

#define INTERNAL_GBA_WIDTH 240
#define INTERNAL_GBA_HEIGHT 160

extern SDL_Surface *sdl_screen, *backbuffer;

extern uint32_t width_of_surface;
extern uint16_t* Draw_to_Virtual_Screen;

void Init_Video();
void Set_Video_Menu();
void Set_Video_InGame();
void Close_Video();
void Update_Video_Menu();
void Update_Video_Ingame(uint16_t* __restrict__ pixels);

#endif
