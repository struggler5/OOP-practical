#pragma once 
#include "player.h"
#include<string>
#include<vector>
class Team{
    private:
        static int nextCode;
        int code;
        std::string name;
        std::vector<Player> players;

    public:
        Team(std::string n);
        void addPlayer(Player& p);
        void removePlayer(Player& p);
        void getPlayers();
        void getInfo();
        std::string getName();
};
