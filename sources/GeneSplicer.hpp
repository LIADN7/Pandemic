#pragma once
#include "Player.hpp"

namespace pandemic{
    class GeneSplicer: public Player{

    public:
        GeneSplicer(Board& board, City city)
            : Player(board, city){}
        
        const string role();
        
        GeneSplicer& discover_cure(Color color);
    };
}