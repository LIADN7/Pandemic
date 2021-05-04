

#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "OperationsExpert.hpp"



#include <iostream>
#include <stdexcept>

using namespace std;
using namespace pandemic;


Board board;
TEST_CASE("test on board"){
 	  // Initialize an empty board (with 0 disease cubes in any city).
	CHECK((board.is_clean()));
    board[City::Kinshasa] = 3;
    CHECK_FALSE((board.is_clean())); 
    CHECK(board[City::Kinshasa]==3);     
	board[City::Kinshasa] = 2;
    CHECK(board[City::Kinshasa]==2);      
	board[City::MexicoCity] = 3;    
	board[City::HoChiMinhCity] = 1; 
	board[City::Chicago] = 1;
    CHECK(board[City::MexicoCity]==3);
    CHECK(board[City::Madrid]==0);
    board.remove_cures();
    CHECK((board.is_clean()));
}

TEST_CASE("test on player"){
	OperationsExpert player {board, City::Atlanta};  // initialize an "operations expert" player on the given board, in Atlanta.
	player.take_card(City::Johannesburg);
	player.take_card(City::Khartoum);
	player.take_card(City::SaoPaulo);
	player.take_card(City::BuenosAires);
	player.take_card(City::HoChiMinhCity);
    //check drive
    CHECK_NOTHROW((player.drive(City::Washington)));
    CHECK_THROWS((player.drive(City::Madrid)));

    //check flay
    CHECK_NOTHROW((player.fly_direct(City::Johannesburg)));
    CHECK_THROWS((player.fly_direct(City::Taipei)));
    board[City::Madrid] = 1;
    board[City::Johannesburg] = 2;
    player.treat(City::Johannesburg);
    CHECK((board[City::Johannesburg]==1));
    player.treat(City::Johannesburg);
    CHECK((board[City::Johannesburg]==0));
    CHECK_THROWS((player.treat(City::Johannesburg)));
    CHECK_THROWS((player.treat(City::Madrid)));

    //cure!
    player.take_card(City::Madrid);
    player.fly_direct(City::Madrid);
    CHECK_THROWS((player.discover_cure(Color::Blue)));
    player.take_card(City::Essen);
    player.take_card(City::Milan);
    player.take_card(City::Paris);
    player.take_card(City::London);
    player.take_card(City::NewYork);
    player.take_card(City::Madrid);
    CHECK_THROWS((player.discover_cure(Color::Blue)));
    player.build();
    CHECK_THROWS((player.discover_cure(Color::Black)));
    CHECK_NOTHROW((player.discover_cure(Color::Blue)));
    CHECK_THROWS((player.fly_direct(City::Milan)));



}
