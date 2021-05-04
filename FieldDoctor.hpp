#pragma once
#include "Player.hpp"

namespace pandemic{
    class FieldDoctor: public Player{
        string _role;
    public:
        FieldDoctor(Board board, City city)
            : Player(board, city), _role("FieldDoctor"){}

        const string role(){
            return _role;
        }
        FieldDoctor& treat(City city);
    };
}