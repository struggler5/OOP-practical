#include<iostream>
#include "match.h" 
#include "team.h" 
#include<random> 
#include<ctime>
#include<iomanip> 
using namespace std;


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
    cout<<"Date : "<<put_time(&date, "%Y-%m-%d")<<endl;
    cout<<"Time : "<<put_time(&time, "%H-%M")<<endl;
    teamsInfo();
}

