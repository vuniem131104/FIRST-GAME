#ifndef menu_h
#define menu_h
#include "textobject.h"
#include "common.h"
#include "baseobject.h"
class Menu : public BaseObject {
    public:
    Menu();
    ~Menu();
    int showMenu(SDL_Renderer* screen);
    private:
    BaseObject g_image;
};

#endif // !