#pragma once
#include "Player.hpp"

namespace pandemic{
    class Medic: public Player{
    public:
        Medic(Board& board, City city)
            : Player(board, city){}

        const string role();
        Medic& drive(City);
        Medic& fly_charter(City);
        Medic& fly_direct(City);
        Medic& fly_shuttle(City);
        Medic& treat(City city);

    };
}