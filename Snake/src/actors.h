#pragma once
#include<iostream>
#include <cstring>
#include<vector>

#define F (char *)

#define H 20
#define W H*2

#define for_i for(i = 0 ; i < H ; i++)
#define for_j for(j = 0 ; j < W ; j++)
#define for_ij for_i for_j

using namespace std;

class point{
    public:
        int x,y;
        point(int _x , int _y);
        point();
};

class Eat{
    public: 
        point pos;
        Eat();
        void draw();
};

class Game{
    public:
        vector<vector<char *>> M_O;
        vector<vector<char *>> M;
        Eat eat;

        Game();
        
        void create_map(int lvl);

        void draw_map();

        void draw();

};
