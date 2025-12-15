#pragma once 
#include "team.h"
#include<vector> 
#include<ctime> 
class Round{
    private:
        static int nextCode;
        int code;
    public:
        Round();
        std::vector<Team> startRound(std::vector<Team> List_Teams,std::tm date, std::tm time);


};
