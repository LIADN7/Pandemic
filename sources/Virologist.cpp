#include "Virologist.hpp"

namespace pandemic{
    Virologist& Virologist::treat(City city){
        Color c=game->arr[city].col;
        if(game->arr[city].level==0){throw exception();}
        else if(city!=lock){
            if(card.find(city)==card.end()){throw exception();}
            else if(card[city]==false){throw exception();}            
        }
        if(game->heal[c]==true){game->arr[city].level=0;}
        else{game->arr[city].level--;}
        
        card[city]=false;
        numCards--;
        return *this;
    }

    const string Virologist::role(){
            return "Virologist";
    }
}