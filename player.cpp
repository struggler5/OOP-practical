#include "player.h"
#include<iostream>
using namespace std;

int Player::nextId = 0;

Player::Player(std::string n, std::string nk){
    name = n;
    nickname = nk;
    studentNumber = "k"+ std::to_string(nextId++);
}




void Player::getPlayerInfo(){
    cout<<"Strudent number: "<< studentNumber <<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Nickname : "<<nickname<<endl;
}

std::string Player::getStudentNumber() {
    return studentNumber;
}
