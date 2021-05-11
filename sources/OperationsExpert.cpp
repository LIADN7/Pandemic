#include "OperationsExpert.hpp"

namespace pandemic{
    OperationsExpert& OperationsExpert::build(){
        game->arr[lock].re=true;
        return *this;
        }

    OperationsExpert::OperationsExpert(Board& board, City city)
        :Player(board,city){}
            
    const string OperationsExpert::role(){
            return "OperationsExpert";
    }
}