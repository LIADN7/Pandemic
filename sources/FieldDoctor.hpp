#pragma once
#include "Player.hpp"

namespace pandemic{
    class FieldDoctor: public Player{
        string _role;
    public:
        FieldDoctor(Board& board, City city)
            : Player(board, city){}

        const string role();
        FieldDoctor& treat(City city);
    };
}