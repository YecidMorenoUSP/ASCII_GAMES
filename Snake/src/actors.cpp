#include<iostream>
#include <cstring>
#include<vector>

#include "actors.h"

using namespace std;

point::point(int _x , int _y):x(_x),y(_y){};
point::point():x(0),y(0){};

Eat::Eat():pos(H/2,W/2){}

void Eat::draw(){
    printf("@");
}


Game::Game(){
    M_O.resize(H);
    fill(M_O.begin(),M_O.end(),vector<char *>(W,F" "));            

    M = M_O;

}

void Game::create_map(int lvl){
    static int i,j;
    for_i{
        for_j{
            
            char * aux = F"@";

            if(i == 0 || i == H-1) aux = F"═";
            else if(j == 0 || j == W-1) aux = F"║";
            else aux = F" ";

            if(i == 0 && j == 0) aux = F"╔";
            else if(i == H-1 && j == W-1) aux = F"╝";
            else if(i == 0 && j == W-1) aux = F"╗";
            else if(i == H-1 && j == 0) aux = F"╚";
            
            /*╔══╗
                ║  ║
                ╚══╝*/

            M[i][j] = F aux;
        }
    }
}

void Game::draw_map(){
    static int i,j;                
    for_i{
        for_j
        printf("%s",M[i][j]);
        printf("\n");
    }
}

void Game::draw(){
    draw_map();
    eat.draw();
}

