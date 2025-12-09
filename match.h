#pragma once 
#include "team.h"
#include<ctime> 


class Match{
    private:
        Teams t1;
        Teams t2;
        std::time_t date = 0;
        std::time_t time = 0;

    public:
        Match(const Teams& team1, const Teams& team2): t1(team1), t2(team2){}

        Teams getWinner();
        void teamsInfo();
        void matchInfo();
        void setDay(std::time_t  d);
        void setTime(std::time_t  t);


};
