#include "player.h"
#include<iostream>
using namespace std;

void player::SetPlayer(string nr, string n, string nk){
    StudentNumber = nr;
    name = n;
    nickname = nk;
}


void player::GetPlayerInfo(){
    cout<<"Strudent number: "<< StudentNumber<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Nickname : "<<nickname<<endl;
}
