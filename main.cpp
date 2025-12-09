#include "team.h" 
#include "player.h" 
#include "round.h"
#include "match.h"
using namespace std;


int main(){
    Player p1;
    p1.setPlayer("m81364", "Andrei", "Andre");
    p1.getPlayerInfo();
    Player p2;
    p2.setPlayer("j3671531", "Sandu", "Sand");
    Teams t1 = Teams("t1");
    t1.addPlayer(p1);
    
    Teams t2 = Teams("t2");
    t2.addPlayer(p2);

    t1.getInfo();
    t2.getInfo();

    t1.removePlayer(p1);
    t1.getInfo();

    Match m1 = Match(t1, t2);
    Round r1 = Round();
    vector<Teams> batch;
    batch.push_back(t1);
    batch.push_back(t2);
    batch = r1.startRound(batch);
    batch[0].getInfo();

}
