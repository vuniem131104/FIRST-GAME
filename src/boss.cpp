#include "boss.h"
Boss :: Boss(){

}

Boss :: ~Boss(){
    
}

void Boss :: khoi_tao_dan(BulletObject* p, SDL_Renderer* screen){
    if(p){
        bool res = p->loadFromFile("res/bl7.png", screen);
        if(res == true){
            p->setRect(rect_.x - 30, 400 - rand() % 150);
            p_bullet_list.push_back(p);
        }
    }
}

void Boss :: dan_ban(SDL_Renderer* screen, int x_b, int y_b){

    for(unsigned int i = 0; i < p_bullet_list.size(); i++){
        BulletObject* p_bullet = p_bullet_list.at(i);
        if(p_bullet){
            if(p_bullet->get_is_move() == true){
                p_bullet->render(screen, NULL);
                p_bullet->handlemove_right_to_left(20);
            }else{
                p_bullet->set_is_move(true);
                p_bullet->setRect(rect_.x - 30, 400 - rand() % 150);
            }
        }
    }
}

void Boss :: dan_ban1(SDL_Renderer* screen, int x_b, int y_b){

    for(unsigned int i = 0; i < p_bullet_list.size(); i++){
        BulletObject* p_bullet = p_bullet_list.at(i);
        if(p_bullet){
            if(p_bullet->get_is_move() == true){
                p_bullet->render(screen, NULL);
                p_bullet->handlemove_right_to_topleft(20);
            }else{
                p_bullet->set_is_move(true);
                p_bullet->setRect(rect_.x - 30, 400 - rand() % 150);
            }
        }
    }
}
void Boss :: dan_ban2(SDL_Renderer* screen, int x_b, int y_b){

    for(unsigned int i = 0; i < p_bullet_list.size(); i++){
        BulletObject* p_bullet = p_bullet_list.at(i);
        if(p_bullet){
            if(p_bullet->get_is_move() == true){
                p_bullet->render(screen, NULL);
                p_bullet->handlemove_right_to_bottomleft(20);
            }else{
                p_bullet->set_is_move(true);
                p_bullet->setRect(rect_.x - 30, 400 - rand() % 150);
            }
        }
    }
}

void Boss :: handle_move_boss(){
    rect_.x -= 3;
    if(rect_.x + 200 < 0){
        dem += 5;
        rect_.x = screen_width;
    }
}