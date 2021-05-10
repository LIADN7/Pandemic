#pragma once
#include "Player.hpp"

namespace pandemic{
    class GeneSplicer: public Player{
        string _role;
    public:
        GeneSplicer(Board board, City city)
            : Player(board, city){}
        
        const string role(){
            return _role;
        }
        GeneSplicer& discover_cure(Color color);
    };
}