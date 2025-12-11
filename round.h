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
        std::vector<Teams> startRound(std::vector<Teams> List_Teams,std::time_t date, std::time_t time);


};
