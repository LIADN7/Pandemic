#pragma once
#include "Player.hpp"

namespace pandemic{
    class Researcher: public Player{
    public:
        Researcher(Board& board, City city)
            : Player(board, city){}
        
        const string role();
        Researcher& discover_cure(Color color);
    };
}