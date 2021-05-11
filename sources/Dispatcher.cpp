#include "Dispatcher.hpp"

namespace pandemic{

    const string  Dispatcher::role(){
        return "Dispatcher";
    }

    Dispatcher& Dispatcher::fly_direct(City city){
        if(city==lock){throw exception();}
        if(game->arr[lock].re==true){
            lock=city;
            return *this;
        }
        if(card.find(city)==card.end()){throw exception();}
        else if(card.at(city)==false){throw exception();}
        card[city]=false;
        lock=city;
        numCards--;
        return *this;
    }
}