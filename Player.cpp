#include "Player.hpp"

namespace pandemic{
    
    Player::Player(){}

    Player& Player::take_card(City city){
        return *this;
    }
    
    Player& Player::drive(City city){
        return *this;
    }
    Player& Player::fly_charter(City city){
        return *this;
    }
    Player& Player::fly_direct(City city){
        return *this;
    }
    Player& Player::fly_shuttle(City city){
        return *this;
    }
    void Player::build(){
        
    }
    void Player::discover_cure(Color color){
        
    }
    Player& Player::treat(City city){
        return *this;
    }

    const string Player::role(){return "role";}
}