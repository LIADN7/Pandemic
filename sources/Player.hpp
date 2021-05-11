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
        Player(Board& board, City city):game(&board),lock(city){
            numCards=0;
            
        }
           
        //~Player(){}
        City getLock(){return lock;}
        virtual Player& take_card(City);
        virtual Player& drive(City);
        virtual Player& fly_charter(City);
        virtual Player& fly_direct(City);
        virtual Player& fly_shuttle(City);
        virtual Player& build();
        virtual Player& discover_cure(Color);
        virtual Player& treat(City);
        void remove_cards();
        virtual const string role();
    };
}