#include "team.h"
#include<iostream>
#include<vector>
using namespace std;


int Team::nextC = 0;
Team::Team(std::string n): code(nextC++){
    name = n ;
}

void Team::addPlayer(Player& p){
    if(!p.inTeam){
        players.push_back(p);
        p.inTeam = true ;
    }
    else cout<<"player is alredy in a team \n";
}

void Team::removePlayer(Player& p){
    for(int i=0;i<players.size();i++){
        if(players[i].getStudentNumber() == p.getStudentNumber()) players.erase(players.begin() + i);
    }
}

void Team::getPlayers(){
    for(Player p: players ){
        p.getPlayerInfo();
    }
}


void Team::getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"code : "<<code<<endl;
    cout<<"nr of players : "<<players.size()<<"\n \n";
    cout<<" Players: \n";
    getPlayers();
}

string Team::getName(){
    return name;
}
