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
    Team t1 = Team("t0");
    t1.addPlayer(p1);
    
    Team t2 = Team("t1");
    t2.addPlayer(p2);

    Team t3 = Team("T0");
    t3.addPlayer(p3);

    Team t4 = Team("T1");
    t4.addPlayer(p4);


    vector<Team> batch;
    batch.push_back(t1);
    batch.push_back(t2);
    batch.push_back(t3);
    batch.push_back(t4);
 //   r1.startRound(batch, d,t);


    for(int i =0;i<batch.size();i++){
        batch[i].getInfo();
    cout<<"----------------------------------\n";
    }

    Tournament tor1 = Tournament("T1", d);
    tor1.getTournamentInfo();
    cout<<"----------------------------------\n";
    tor1.startTournament(batch);
}
