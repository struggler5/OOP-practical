#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <random>
#include "tournament.h"
#include "round.h"
using namespace std;

int Tournament::nextCode = 0;
Tournament::Tournament(int c, const std::string& n, std::time_t sd): code(nextCode++){
    code++;
    name = n;
    startDate = sd;
}

Teams Tournament::startTournament (std::vector<Teams> T) {
    std::mt19937 g(std::time(nullptr));
    std::shuffle(T.begin(), T.end(), g);

    while (T.size() > 1) {
        //startRound();

    }
    return T[0];
}

void Tournament::getTournamentInfo() {
    std::cout << "Tournament Code: " << code << std::endl;
    std::cout << "Tournament Name: " << name << std::endl;
    std::cout << "Start Date: " << std::ctime(&startDate) << std::endl;
}