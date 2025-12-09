#pragma once 
#include<string>
class Player{
    private:
        static int nextId;
        std::string name;
        std::string nickname;
        std::string studentNumber;

    public:
        Player(std::string n, std::string nk);
        std::string getStudentNumber();
        bool inTeam = false;
        void getPlayerInfo();
};
