#pragma once
#include "Board.hpp"

namespace pandemic{
    class Player{
        Board game;
        City lock;
        
        map<City, bool> card;  
    
    public:
        Player();
        Player(Board board, City city){
            game=board;
            lock=city;

        }
           
        //~Player(){}

        Player& take_card(City);
        Player& drive(City);
        Player& fly_charter(City);
        Player& fly_direct(City);
        Player& fly_shuttle(City);
        void build();
        void discover_cure(Color);
        Player& treat(City);
        
        const string role();
    };
}