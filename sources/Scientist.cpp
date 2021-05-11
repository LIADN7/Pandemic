#include "Scientist.hpp"

namespace pandemic{
    Scientist& Scientist::discover_cure(Color color){
        if(game->heal[color]==true);
        else{
            if(game->arr[lock].re!=true){throw exception();}
            int contC=0;
            for (auto const& x : card){
                if(x.second==true&&game->arr[x.first].col==color){
                    contC++;
                }
            }
            if(contC<n){throw exception();}
            contC=0;   
            for (auto const& x : card){
                if(x.second==true&&game->arr[x.first].col==color){
                    if(contC<(n+1)){
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

    const string Scientist::role(){
            return "Scientist";
    }




}