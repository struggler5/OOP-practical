#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <random>
#include "tournament.h"
#include "round.h"
#include<iomanip> 
using namespace std;

int Tournament::nextCode = 0;
Tournament::Tournament( const std::string& n, std::tm sd): code(nextCode++){
    code++;
    name = n;
    startDate = sd;
}

void Tournament::startTournament (std::vector<Teams> T) {
    if((T.size() == 2 || !(T.size() % 4)) && T.size() <=20){
        mt19937 g(std::time(nullptr));
        shuffle(T.begin(), T.end(), g);
        
        tm hour;
        hour.tm_hour = 8;
        vector<Round> R;
        for(int i = 0;T.size() > 1;i++) {
            cout<<"ROUND : "<<i+1<<endl;
        R.push_back(Round());
        T = R[i].startRound(T,startDate, hour);
        startDate.tm_mday++;
        cout<<"---------------------------------\n";
        cout<<"---------------------------------\n";
        }

            cout<<"---------------------------------\n";
            cout<<"---------------------------------\n";
            cout<<"WINNER: \n";
            T[0].getInfo();
    }
    else cout<<"Insert valid number of teams \n";
}

void Tournament::getTournamentInfo() {
    cout << "Tournament Code: " << code << endl;
    cout << "Tournament Name: " << name << endl;
    cout << "Start Date: " << put_time(&startDate, "%Y-%m-%d")<< endl;
}
