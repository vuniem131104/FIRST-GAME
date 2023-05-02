#ifndef common_h
#define common_h
#include <string>
#include <iostream>
#include <vector>
#include <ctime>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
using namespace std;
const int frame_per_second = 25;
const int screen_width = 1280;
const int screen_height = 670;
const int BG_WIDTH = 6000;
const int BG_HEIGHT = 700;
const int BOSS_WIDTH = 180;
const int BOSS_HEIGHT = 250;
namespace COMMONF{
    bool checkCollision(const SDL_Rect& object1, const SDL_Rect& object2);
    int checkfocus(int x, int y, const SDL_Rect& rect);
}

#endif 