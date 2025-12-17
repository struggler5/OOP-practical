
#include<vector> 
#include<ctime> 
#pragma once 






#include <iostream>
#include <string>

class Player{
    private:
        static int nextId;
        std::string name;
        std::string nickname;
        std::string studentNumber;

    public:
        Player(std::string n, std::string nk);
        std::string getStudentNumber();
        bool inTeam = false;
        void getPlayerInfo();
};
class Team{
    private:
        static int nextCode;
        int code;
        std::string name;
        std::vector<Player> players;

    public:
        Team(std::string n);
        void addPlayer(Player& p);
        void removePlayer(Player& p);
        void getPlayers();
        void getInfo();
        std::string getName();
};
class Tournament {
    private:
        static int nextCode;
        int code;
        std::string name;
        std::tm startDate;
    public:
        Tournament (const std::string& n, std::tm sd);
        void startTournament(std::vector<Team> teams);
        void getTournamentInfo();
};





class Round{
    private:
        static int nextCode;
        int code;
    public:
        Round();
        std::vector<Team> startRound(std::vector<Team> List_Teams,std::tm date, std::tm time);


};

class Match{
    private:
        Team t1;
        Team t2;
        std::tm date ;
        std::tm time;

    public:
        Match(const Team& team1, const Team& team2, std::tm d, std::tm t): t1(team1), t2(team2), date(d), time(t) {}

        void setTeams(Team team1, Team team2);
        Team getWinner();
        void teamsInfo();
        void matchInfo();


};
