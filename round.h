#pragma once 
#include "teams.h"
#include<vector> 

class round{
    private:
        static int nextCode;
        int code;
    public:
        round();
        std::vector<teams> StartRound(std::vector<teams> List_Teams);


};
