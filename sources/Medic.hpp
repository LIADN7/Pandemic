#pragma once
#include "Player.hpp"

namespace pandemic{
    class Medic: public Player{
        string _role;
    public:
        Medic(Board board, City city)
            : Player(board, city), _role("Medic"){}

        const string role(){
            return _role;
        }
        //////////meybe add the other function////////////
        Medic& treat(City city);
    };
}