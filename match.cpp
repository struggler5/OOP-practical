#include<iostream>
#include "match.h" 
#include "team.h" 
#include<random> 
using namespace std;


void Match::setTeams(Teams team1, Teams team2){
    t1 = team1;
    t2 = team2;
}

Teams Match::getWinner(){
    
    Teams l1[2] = {t1,t2};

    return l1[std::rand()%2];
}


void Match::teamsInfo(){

    cout<<"Team 1 : \n";
    t1.getInfo();

    cout<<"--------------------\n";
    cout<<"Team 2 : \n";
    t2.getInfo();
    cout<<"--------------------\n";
}


void Match::matchInfo(){
    cout<<"Date : "<<date<<" \n Time: "<<time<<"\n -------------------- \n";
    teamsInfo();
}

void Match::setDay(std::time_t d){
    date = d;
}

void Match::setTime(std::time_t t){
    time = t;
}
