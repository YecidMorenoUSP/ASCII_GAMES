#include<iostream>
#include <cstring>
#include<vector>

#include "actors.h"


int main(){
    system("clear");

    Game game;

    game.create_map(1);
    game.draw();

       

    return 0;
}