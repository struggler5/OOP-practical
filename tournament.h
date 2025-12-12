#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "team.h"

class Tournament {
    private:
        static int nextCode;
        int code;
        std::string name;
        std::tm startDate;
    public:
        Tournament (const std::string& n, std::tm sd);
        void startTournament(std::vector<Teams> teams);
        void getTournamentInfo();
};
