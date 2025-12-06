#include "teams.h"
#include<iostream>
#include<vector>
using namespace std;


int teams::nextC = 0;
teams::teams(std::string n): code(nextC++){
    name = n;
    code++;
}

void teams::addPlayer(const player& p){
    players.push_back(p);
}

void teams::GetPlayers(){
    for(player p: players ){
        p.GetPlayerInfo();
    }
}


void teams::GetInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"code : "<<code<<endl;
    cout<<"nr of players : "<<players.size()<<endl;
}
