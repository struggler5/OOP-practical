#pragma once 
#include "team.h"
#include<ctime> 


class Match{
    private:
        Team t1;
        Team t2;
        std::tm date ;
        std::tm time;

    public:
        Match(const Team& team1, const Team& team2, std::tm d, std::tm t): t1(team1), t2(team2), date(d), time(t) {}

        void setTeams(Team team1, Team team2);
        Team getWinner();
        void teamsInfo();
        void matchInfo();


};
