#include<iostream>
#include "matches.h" 
#include "teams.h" 
#include<random> 
using namespace std;


void match::SetTeams(teams team1, teams team2){
    t1 = team1;
    t2 = team2;
}

teams match::getWinner(){
    
    teams l1[2] = {t1,t2};

    return l1[std::rand()%2];
}


void match::TeamsInfo(){

    cout<<"Team 1 : \n";
    t1.GetInfo();

    cout<<"--------------------\n";
    cout<<"Team 2 : \n";
    t2.GetInfo();
    cout<<"--------------------\n";
}


void match::MatchInfo(){
    cout<<"Date : "<<date<<" \n Time: "<<time<<"\n -------------------- \n";
    TeamsInfo();
}

void match::setDay(std::time_t d){
    date = d;
}

void match::setTime(std::time_t t){
    time = t;
}
