#include "team.h" 
#include "player.h" 
#include "round.h"
#include "match.h"
using namespace std;


int main(){

    tm d = {} ;
    d.tm_year = 2025 - 1900;
    d.tm_mon = 6-1;
    d.tm_mday = 10;


    tm t = {};
    t.tm_hour = 8;




    Player p1 = Player("Andrei", "Andre");
    p1.getPlayerInfo();
    Player p2 = Player("Sandu", "Alex");
    p2.getPlayerInfo();
    Teams t1 = Teams("t1");
    t1.addPlayer(p1);
    
    Teams t2 = Teams("t2");
    t2.addPlayer(p2);


    t1.removePlayer(p1);

    Match m1 = Match(t1, t2, d ,t);
    Round r1 = Round();
    vector<Teams> batch;
    batch.push_back(t1);
    batch.push_back(t2);
    r1.startRound(batch, d,t);
}
