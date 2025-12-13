#include<iostream>
#include "match.h" 
#include "team.h" 
#include<random> 
#include<ctime>
#include<iomanip> 
using namespace std;


Teams Match::getWinner(){
    
    Teams l1[2] = {t1,t2};

    return l1[rand()%2];
}


void Match::teamsInfo(){

    cout<<t1.getName()<<" VS "<< t2.getName()<<"\n";
}


void Match::matchInfo(){
    cout<<"--------------------\n";
    cout<<"Date : "<<put_time(&date, "%Y-%m-%d")<<endl;
    cout<<"Time : "<<put_time(&time, "%H-%M")<<endl;
    cout<<endl;
}

