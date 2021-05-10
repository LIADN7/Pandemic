#pragma once
#include "Player.hpp"

namespace pandemic{
    class Researcher: public Player{
        string _role;
    public:
        Researcher(Board board, City city)
            : Player(board, city), _role("Researcher"){}
        
        const string role(){
            return _role;
        }
        Researcher& discover_cure(Color color);
    };
}