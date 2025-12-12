#include "team.h" 
#include "tournament.h"
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
    Player p2 = Player("Sandu", "Alex");
    Player p3 = Player("Lala", "ion");
    Player p4 = Player("sasa", "A");
    Teams t1 = Teams("t0");
    t1.addPlayer(p1);
    
    Teams t2 = Teams("t0");
    t2.addPlayer(p2);

    Teams t3 = Teams("T0");
    t3.addPlayer(p3);

    Teams t4 = Teams("T0");
    t4.addPlayer(p4);

    t1.removePlayer(p1);

    vector<Teams> batch;
    batch.push_back(t1);
    batch.push_back(t2);
    batch.push_back(t3);
    batch.push_back(t4);
 //   r1.startRound(batch, d,t);
    Tournament tor1 = Tournament("T1", d);
    cout<<"----------------------------------\n";
    tor1.startTournament(batch).getInfo();
    tor1.getTournamentInfo();
}
