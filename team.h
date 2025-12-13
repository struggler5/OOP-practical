#pragma once 
#include "player.h"
#include<string>
#include<vector>
class Teams{
    private:
        static int nextC;
        int code;
        std::string name;
        std::vector<Player> players;

    public:
        Teams(std::string n);
        void addPlayer(Player& p);
        void removePlayer(Player& p);
        void getPlayers();
        void getInfo();
        std::string getName();
};
