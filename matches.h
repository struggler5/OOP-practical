#pragma once 
#include "teams.h"
#include<ctime> 


class match{
    private:
        teams t1;
        teams t2;
        std::time_t date;
        std::time_t time;

    public:
        match(const teams& team1, const teams& team2, std::time_t d, std::time_t t): t1(team1), t2(team2), date(d), time(t) {}

        void SetTeams(teams team1, teams team2);
        teams getWinner();
        void TeamsInfo();
        void MatchInfo();
        void setDay(std::time_t  d);
        void setTime(std::time_t  t);


};
