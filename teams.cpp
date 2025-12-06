#include "teams.h"
#include<iostream>
#include<vector>
using namespace std;


int teams::nextC = 0;
teams::teams(std::string n): code(nextC++){
    name = n;
    code++;
}

void teams::addPlayer(player& p){
    if(!p.inTeam){
        players.push_back(p);
        p.inTeam = true ;
    }
    else cout<<"player is alredy in a team \n";
}

void teams::removePlayer(player& p){
    for(int i=0;i<players.size();i++){
        if(players[i].StudentNumber == p.StudentNumber) players.erase(players.begin() + i);
    }
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
