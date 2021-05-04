#pragma once
#include "Player.hpp"

namespace pandemic{
    class Scientist: public Player{
        string _role;
        int _n;
    public:
        Scientist(Board board, City city, int n)
            : Player(board, city), _role("Scientist"), _n(n){}

        const string role(){
            return _role;
        }
        Scientist& discover_cure(Color color);
    };
}