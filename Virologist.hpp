#pragma once
#include "Player.hpp"

namespace pandemic{
    class Virologist: public Player{
        string _role;
    public:
        Virologist(Board board, City city)
            : Player(board, city), _role("Virologist"){}
        
        const string role(){
            return _role;
        }
        Virologist& treat(City city);
    };
}