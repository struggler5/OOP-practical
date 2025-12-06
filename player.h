#pragma once 
#include<string>
class player{
    private:
        std::string name;
        std::string nickname;

    public:
        
        std::string StudentNumber;
        bool inTeam = false;
        void SetPlayer(std::string nr, std::string n, std::string nk);
        void GetPlayerInfo();
};
