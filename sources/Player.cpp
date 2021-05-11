#include "Player.hpp"

namespace pandemic{
    
    Player::Player(){}

    Player& Player::take_card(City city){
        card[city]=true;
        numCards++;


        return *this;
    }
    
    Player& Player::drive(City city){
        if(city==nullCity){throw exception();}
        array<City, 6> x =game->arr[lock].mp;
        //  getMap(lock).getConnected();
        for(unsigned int i=0;i<x.size();i++){
            if(x[i]==city){
                lock=city;
                return *this;
            }
            else if(x[i]==City::nullCity){throw exception();}
        }
        throw exception();
        return *this;
    }

    Player& Player::fly_charter(City city){
        if(card.find(lock)==card.end()){throw exception();}
        else if(card.at(lock)==false){throw exception();}
        card[lock]=false;
        lock=city;
        numCards--;
        return *this;
    }

    Player& Player::fly_direct(City city){
        if(card.find(city)==card.end()){throw exception();}
        else if(card.at(city)==false){throw exception();}
        card[city]=false;
        lock=city;
        numCards--;
        return *this;
    }
    
    Player& Player::fly_shuttle(City city){
        if((game->arr[lock].re!=true)||(game->arr[city].re!=true)){throw exception();}
        else if(city==lock){throw exception();}
        lock=city;
        return *this;
    }

    Player& Player::build(){
        if(card.find(lock)==card.end()){throw exception();}
        else if(card[lock]==false){throw exception();}
        else if(game->arr[lock].re!=true){
            card[lock]=false;
            numCards--;
            game->arr[lock].re=true;
        }
        return *this;
    }

    Player& Player::discover_cure(Color color){
        if(game->heal[color]==true){;}
        else{
            if(game->arr[lock].re!=true){throw exception();}
            int contC=0;
            for (auto const& x : card){
                if(x.second==true&&game->arr[x.first].col==color){
                    contC++;
                }
            }
            if(contC<5){throw exception();}
            contC=0;   
            for (auto const& x : card){
                if(x.second==true&&game->arr[x.first].col==color){
                    if(contC<6){
                        card[x.first]=false;
                        numCards--;              
                        contC++;
                    }
                }
            }
            game->heal[color]=true;
        }
        return *this;
    }

    Player& Player::treat(City city){
        Color c=game->arr[city].col;
        if(game->arr[city].level==0){throw exception();}
        else if(city!=lock){throw exception();}
        else if(game->heal[c]==true){game->arr[city].level=0;}
        else{game->arr[city].level--;}

        
        
        return *this;
    }

    const string Player::role(){return "regular player no role";}


    void Player::remove_cards(){
        for (auto  x : card){
            x.second=false;
        }
        numCards=0;
            
    }
}