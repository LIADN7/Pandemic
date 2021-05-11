#pragma once
#include "Player.hpp"

namespace pandemic{
    class Scientist: public Player{
        int n;
    public:
        Scientist(Board& board, City city, int num)
            : Player(board, city), n(num){}

        const string role();
        
        Scientist& discover_cure(Color color);
    };
}