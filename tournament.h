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
        std::time_t startDate;
    public:
        Tournament (int c, const std::string& n, std::time_t sd);
        Teams startTournament(std::vector<Teams> teams);
        void getTournamentInfo();
};