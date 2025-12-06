#pragma once 
#include<string>
class player{
    private:
        std::string StudentNumber;
        std::string name;
        std::string nickname;

    public:
        void SetPlayer(std::string nr, std::string n, std::string nk);
        void GetPlayerInfo();
};
