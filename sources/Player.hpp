#pragma once
#include "Board.hpp"

namespace pandemic{
    class Player{



    public:
        Board *game;
        City lock;
        map<City, bool> card;  
        int numCards;
        
        
        Player();
        Player(Board& board, City city){
            game=&board;
            lock=city;
            numCards=0;
            
        }
           
        //~Player(){}
        City getLock(){return lock;}
        Player& take_card(City);
        Player& drive(City);
        Player& fly_charter(City);
        Player& fly_direct(City);
        Player& fly_shuttle(City);
        void build();
        void discover_cure(Color);
        Player& treat(City);
        void remove_cards();
        const string role();
    };
}