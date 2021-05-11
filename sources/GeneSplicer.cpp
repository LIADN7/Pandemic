#include "GeneSplicer.hpp"

namespace pandemic{

    GeneSplicer& GeneSplicer::discover_cure(Color color){
        
        
        if(game->heal[color]==true){;}
        else if(numCards<5){throw exception();}
        else{
            if(game->arr[lock].re!=true){throw exception();}
            int contC=0;
            for (auto const& x : card){
                if(contC<6){
                    card[x.first]=false;
                    numCards--;              
                    contC++;
                }
                
            }
            game->heal[color]=true;
        }

        
        return *this;
    }

    const string GeneSplicer::role(){
            return "GeneSplicer";
    }

}
