#pragma once
#include "Player.hpp"

namespace pandemic{
    class OperationsExpert: public Player{ 

    public:
        OperationsExpert(Board board, City city)
            : Player(board, city){}
        const string role(){
            return "OperationsExpert";
        }
        void build();
    };
}