#include<iostream>
#include "matches.h" 
#include "teams.h" 
#include "player.h" 
#include "round.h"
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
    
    match m1 = match(t1, t2, 0,0);
    
    round r1 = round();
    vector<teams> batch;
    batch.push_back(t1);
    batch.push_back(t2);
    batch = r1.StartRound(batch);
    batch[0].GetInfo();


}
