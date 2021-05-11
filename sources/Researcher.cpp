#include "Researcher.hpp"

namespace pandemic{

    Researcher& Researcher::discover_cure(Color color){
        if(game->heal[color]==true);
        else{
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

    const string Researcher::role(){
            return "Researcher";
    }
}