#include "round.h"
#include "teams.h"
#include "matches.h" 
#include <vector> 
#include<iostream>

    using namespace std;

int round::nextCode = 0;

round::round():code(nextCode++){
    code++;
}

std::vector<teams> round::StartRound(std::vector<teams> List_Teams) {
    
    vector<teams> winners;    

    for(int i=0;i<List_Teams.size();i+=2){
            match Match = match(List_Teams[i], List_Teams[i+1], 0, 0);
            winners.push_back(Match.getWinner());

        }

    return winners;
    }







