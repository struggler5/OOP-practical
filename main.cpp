#include<iostream>
#include "teams.h" 
#include "player.h" 

using namespace std;


int main(){
    player p1;
    p1.SetPlayer("m81364", "Andrei", "Andre");
    p1.GetPlayerInfo();
    player p2;
    p2.SetPlayer("j3671531", "Sandu", "Sand");
    teams t1 = teams("t1");
    t1.addPlayer(p1);
    
    teams t2 = teams("t2");
    t2.addPlayer(p2);

    t1.GetInfo();
    t2.GetInfo();
    

}
