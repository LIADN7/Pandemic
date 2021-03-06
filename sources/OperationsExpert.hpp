#include "Player.hpp"

namespace pandemic{
    class OperationsExpert: public Player{ 

    public:
        OperationsExpert& build();
        OperationsExpert(Board& board, City city);
        const string role();

    };
}