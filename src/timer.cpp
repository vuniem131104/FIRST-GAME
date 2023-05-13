#include "timer.h"
#include "common.h"
Timer :: Timer(){
    start_tick_ = 0;
    paused_tick_ = 0;
    is_paused_ = false;
    is_started_ = false;
}
Timer :: ~Timer(){

}

void Timer :: start(){
    is_started_ = true;
    is_paused_ = false;
    start_tick_ = SDL_GetTicks();
}

int Timer :: get_ticks(){
    if(is_started_ == true){
        if(is_paused_ == true){
            return paused_tick_;
        }else{
            return SDL_GetTicks() - start_tick_;
        }
    }
    return 0;
}

bool Timer :: is_start(){
    return is_started_;
}