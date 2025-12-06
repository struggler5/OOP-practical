#pragma once 
#include "player.h"
#include<string>
#include<vector>
class teams{
    private:
        static int nextC;
        int code;
        std::string name;
        std::vector<player> players;

    public:
        teams(std::string n);
        void addPlayer(const player& p);
        void GetPlayers();
        void GetInfo();
};
