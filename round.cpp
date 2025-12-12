#include "round.h"
#include "team.h"
#include "match.h" 
#include <vector> 
#include<iostream>
#include<ctime> 

using namespace std;

int Round::nextCode = 0;

Round::Round():code(nextCode++){
    code++;
}

std::vector<Teams> Round::startRound(std::vector<Teams> List_Teams, std::tm date, std::tm time) {
    
    vector<Teams> winners;    

    for(int i=0;i<List_Teams.size();i+=2){
        cout<<"MATCH : \n";
            Match match = Match(List_Teams[i], List_Teams[i+1],date, time);
            match.matchInfo();
            winners.push_back(match.getWinner());

            time.tm_hour++;
        }

    return winners;
    }







