#include "Medic.hpp"

namespace pandemic{


    const string Medic::role(){
        return "Medic";
    }


    Medic& Medic::drive(City city){
        Color c=game->arr[city].col;

        array<City, 6> x =game->getMap(this->lock).getConnected();
        for(unsigned int i=0;i<x.size();i++){
            if(x[i]==city){
                if(game->heal[c]==true){game->arr[city].level=0;}
                lock=city;
                return *this;
            }
            else if(x[i]==City::nullCity){throw exception();}
        }
        throw exception();
        return *this;

    }
        //Color c=game->arr[city].col;    
        //if(game->heal[c]==true){game->arr[city].level=0;}

    Medic& Medic::fly_charter(City city){

        if(card.find(lock)==card.end()){throw exception();}
        else if(card.at(lock)==false){throw exception();}
        Color c=game->arr[city].col;    
        if(game->heal[c]==true){game->arr[city].level=0;}        
        card[lock]=false;
        lock=city;
        numCards--;
        return *this;
    }


    Medic& Medic::fly_direct(City city){
        if(card.find(city)==card.end()){throw exception();}
        else if(card.at(city)==false){throw exception();}
        Color c=game->arr[city].col;    
        if(game->heal[c]==true){game->arr[city].level=0;}
        card[city]=false;
        lock=city;
        numCards--;
        return *this;
    }


    Medic& Medic::fly_shuttle(City city){
        if((game->getMap(lock).re!=true)||(game->getMap(city).re!=true)){throw exception();}
        
        Color c=game->arr[city].col;    
        if(game->heal[c]==true){game->arr[city].level=0;}
        lock=city;
        return *this;
    }



    Medic& Medic::treat(City city){
        Color c=game->arr[city].col;
        if(game->arr[city].level==0){throw exception();}
        else if(city!=lock){throw exception();}
        game->arr[city].level=0;
        return *this;
    }
}