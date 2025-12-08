#pragma once 
#include "team.h"
#include<vector> 

class Round{
    private:
        static int nextCode;
        int code;
    public:
        Round();
        std::vector<Teams> startRound(std::vector<Teams> List_Teams);


};
