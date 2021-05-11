#include "FieldDoctor.hpp"

namespace pandemic{

    FieldDoctor& FieldDoctor::treat(City city){

        
        Color c=game->arr[city].col;
        bool flag=false;
        if(game->arr[city].level==0){throw exception();}
        else if(city==lock){
            game->arr[city].level--;
            return *this;
        }
        else{
            for(unsigned int i=0;i<game->arr[lock].mp.size()&&!flag;i++){
                if(city==game->arr[lock].mp[i]){
                    flag=true;
                }
            }
        }
        
        if(!flag){throw exception();}
        else if(game->heal[c]==true){game->arr[city].level=0;}
        else{game->arr[city].level--;}
        
        return *this;
    }

    const string FieldDoctor::role(){
        return "FieldDoctor";
    }
}