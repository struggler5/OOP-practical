#pragma once 
#include<string>
class Player{
    private:
        std::string name;
        std::string nickname;
        std::string studentNumber;

    public:
        
        std::string getStudentNumber();
        bool inTeam = false;
        void setPlayer(std::string nr, std::string n, std::string nk);
        void getPlayerInfo();
};
