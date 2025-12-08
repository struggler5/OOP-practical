#include "player.h"
#include<iostream>
using namespace std;

void Player::setPlayer(string nr, string n, string nk){
    studentNumber = nr;
    name = n;
    nickname = nk;
}


void Player::getPlayerInfo(){
    cout<<"Strudent number: "<< studentNumber <<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Nickname : "<<nickname<<endl;
}

std::string Player::getStudentNumber() {
    return studentNumber;
}