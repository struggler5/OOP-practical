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
    Player p5 = Player("marko", "B");
    Player p6 = Player("ivan", "C");
    Player p7 = Player("luka", "A");
    Player p8 = Player("nikola", "B");

    Team t1 = Team("t0");
    t1.addPlayer(p1);
    t1.addPlayer(p5);   

    Team t2 = Team("t1");
    t2.addPlayer(p2);
    t2.addPlayer(p6);   

    Team t3 = Team("T0");
    t3.addPlayer(p3);
    t3.addPlayer(p7);



    Team t4 = Team("T1");
    t4.addPlayer(p4);
    t4.addPlayer(p8);

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
