#include "Board.hpp"

using namespace std;

namespace pandemic{


    Board::Board(){
        arr[City::Johannesburg] = gameMap{City::Johannesburg, Color::Yellow, City::Kinshasa,City::Khartoum};
        
        arr[City::Kinshasa] = gameMap{City::Kinshasa,Color::Yellow, City::Lagos,City::Khartoum,City::Johannesburg};
        
        arr[City::Khartoum] = gameMap{City::Khartoum,Color::Yellow, 
            City::Cairo,City::Lagos,City::Kinshasa,City::Johannesburg};
        
        arr[City::Lagos] = gameMap{City::Lagos, Color::Yellow, 
            City::SaoPaulo,City::Khartoum,City::Kinshasa};
        
        arr[City::SaoPaulo] = gameMap{City::SaoPaulo, Color::Yellow, 
            City::Bogota,City::SaoPaulo};
        
        arr[City::BuenosAires] = gameMap{City::BuenosAires, Color::Yellow, 
            City::Bogota,City::SaoPaulo};
        
        arr[City::Bogota] = gameMap{City::Bogota, Color::Yellow, 
            City::MexicoCity,City::Lima,City::Miami,City::SaoPaulo,City::BuenosAires};
        
        arr[City::Lima] = gameMap{City::Lima, Color::Yellow, 
            City::MexicoCity,City::Bogota,City::Santiago};
        
        arr[City::Santiago] = gameMap{City::Santiago ,Color::Yellow, 
            City::Lima};
        
        arr[City::Miami] = gameMap{City::Miami, Color::Yellow, 
            City::Atlanta,City::MexicoCity,City::Washington,City::Bogota};
        
        arr[City::MexicoCity] = gameMap{City::MexicoCity, Color::Yellow, 
            City::LosAngeles,City::Chicago,City::Miami,City::Lima,City::Bogota};
        
        arr[City::LosAngeles] = gameMap{City::LosAngeles, Color::Yellow, 
            City::SanFrancisco,City::Chicago,City::MexicoCity,City::Sydney};
        
        arr[City::SanFrancisco] = gameMap{City::SanFrancisco, Color::Blue, 
            City::LosAngeles,City::Chicago,City::Tokyo,City::Manila};    
        
        arr[City::Chicago] = gameMap{City::Chicago, Color::Blue, 
            City::SanFrancisco,City::LosAngeles,City::MexicoCity,City::Atlanta,City::Montreal};
        
        arr[City::Atlanta] = gameMap{City::Atlanta, Color::Blue, 
            City::Chicago,City::Miami,City::Washington};
        
        arr[City::Washington] = gameMap{City::Washington, Color::Blue, 
            City::Atlanta,City::NewYork,City::Montreal,City::Miami};
        
        arr[City::Montreal] = gameMap{City::Montreal, Color::Blue, 
            City::Chicago,City::Washington,City::NewYork};
        
        arr[City::NewYork] = gameMap{City::NewYork, Color::Blue, 
            City::Montreal,City::Washington,City::London,City::Madrid};
        
        arr[City::Madrid] = gameMap{City::Madrid, Color::Blue, 
            City::London,City::NewYork,City::Paris,City::SaoPaulo,City::Algiers};
        
        arr[City::London] = gameMap{City::London, Color::Blue, 
            City::NewYork,City::Madrid,City::Essen,City::Paris};
        
        arr[City::Paris] = gameMap{City::Paris, Color::Blue, 
            City::Algiers,City::Essen,City::Madrid,City::Milan,City::London};
        
        arr[City::Milan] = gameMap{City::Milan, Color::Blue
            ,City::Essen,City::Paris,City::Istanbul};
        
        arr[City::Essen] = gameMap{City::Essen, Color::Blue
            ,City::London,City::Paris,City::Milan,City::StPetersburg};
        
        arr[City::StPetersburg] = gameMap{City::StPetersburg, Color::Blue
            ,City::Essen,City::Istanbul,City::Moscow};
        
        arr[City::Moscow] = gameMap{City::Moscow, Color::Black
            ,City::StPetersburg,City::Istanbul,City::Tehran}; 
        
        arr[City::Istanbul] = gameMap{City::Istanbul, Color::Black
            ,City::Milan,City::Algiers,City::StPetersburg,City::Cairo,City::Baghdad,City::Moscow};
        
        arr[City::Algiers] = gameMap{City::Algiers, Color::Black
            ,City::Madrid,City::Paris,City::Istanbul,City::Cairo};
        
        arr[City::Cairo] = gameMap{City::Cairo, Color::Black
            ,City::Algiers,City::Istanbul,City::Baghdad,City::Khartoum,City::Riyadh};
        
        arr[City::Riyadh] = gameMap{City::Riyadh, Color::Black
            ,City::Baghdad,City::Cairo,City::Karachi};
        
        arr[City::Baghdad] = gameMap{City::Baghdad, Color::Black
            ,City::Tehran,City::Istanbul,City::Cairo,City::Riyadh,City::Karachi};
        
        arr[City::Tehran] = gameMap{City::Tehran, Color::Black
            ,City::Baghdad,City::Moscow,City::Karachi,City::Delhi};
        
        arr[City::Karachi] = gameMap{City::Karachi, Color::Black
            ,City::Tehran,City::Baghdad,City::Riyadh,City::Mumbai,City::Delhi};
        
        arr[City::Mumbai] = gameMap{City::Mumbai, Color::Black
            ,City::Karachi,City::Delhi,City::Chennai};
        
        arr[City::Delhi] = gameMap{City::Delhi, Color::Black
            ,City::Tehran,City::Karachi,City::Mumbai,City::Chennai,City::Kolkata};
        
        arr[City::Kolkata] = gameMap{City::Kolkata, Color::Black
            ,City::Delhi,City::Chennai,City::Bangkok,City::HongKong};
        
        arr[City::Chennai] = gameMap{City::Chennai, Color::Black
            ,City::Mumbai,City::Delhi,City::Kolkata,City::Bangkok,City::Jakarta};
        
        arr[City::Jakarta] = gameMap{City::Jakarta, Color::Red
            ,City::Chennai,City::Bangkok,City::HoChiMinhCity,City::Sydney};

        arr[City::HoChiMinhCity] = gameMap{City::HoChiMinhCity, Color::Red
            ,City::Jakarta,City::Bangkok,City::HongKong,City::Manila};

        arr[City::Bangkok] = gameMap{City::Bangkok, Color::Red
            ,City::Kolkata,City::Chennai,City::Jakarta,City::HoChiMinhCity,City::HongKong};

        arr[City::HongKong] = gameMap{City::HongKong, Color::Red
            ,City::Bangkok,City::Kolkata,City::HoChiMinhCity,City::Shanghai,City::Manila,City::Taipei};

        arr[City::Shanghai] = gameMap{City::Shanghai, Color::Red
            ,City::Beijing,City::HongKong,City::Taipei,City::Seoul,City::Tokyo};

        arr[City::Beijing] = gameMap{City::Beijing, Color::Red
            ,City::Shanghai,City::Seoul};

        arr[City::Seoul] = gameMap{City::Seoul, Color::Red
            ,City::Beijing,City::Shanghai,City::Tokyo};

        arr[City::Tokyo] = gameMap{City::Tokyo, Color::Red
            ,City::Seoul,City::Shanghai,City::Osaka,City::SanFrancisco};

        arr[City::Osaka] = gameMap{City::Osaka, Color::Red
            ,City::Taipei,City::Tokyo};

        arr[City::Taipei] = gameMap{City::Taipei, Color::Red
            ,City::Shanghai,City::HongKong,City::Osaka,City::Manila};

        arr[City::Manila] = gameMap{City::Manila, Color::Red
            ,City::Taipei,City::SanFrancisco,City::HoChiMinhCity,City::Sydney};

        arr[City::Sydney] = gameMap{City::Sydney, Color::Red
            ,City::Jakarta,City::Manila,City::LosAngeles};       
        doEnumMap();
    }


    string Board::getCityName(City city){
        if(arr.find(city)==arr.end())
            {return "null";}
        return enumMap[city];    
    }

    string Board::getColorName(Color color){
        if(color==Yellow){return "Yellow";}
        else if(color==Blue){return "Blue";}
        else if(color==Black){return "Black";}
        else if(color==Red){return "Red";}
        else {return "none color";}
    }

    int& Board::operator[](City city){
        int& temp = arr[city].getLevel();
        return temp;   
    }

           
    
        //~Board();
        bool Board::is_clean(){
            for (auto const& x : arr){
                if(x.second.level!=0){return false;}
            }  
            return true;
        }

        void Board::remove_cures(){
            for (auto const& x : arr){
                if(x.second.level!=0){arr[x.first].getLevel()=0;}
            }      
        }

        ostream& operator<<(ostream& out, const Board& board){return out;}




    void Board::doEnumMap(){
                enumMap[City::Johannesburg]="Johannesburg";
                enumMap[City::Kinshasa]="Kinshasa";
                enumMap[City::Khartoum]="Khartoum";
                enumMap[City::Lagos]="Lagos";
                enumMap[City::SaoPaulo]="SaoPaulo";
                enumMap[City::BuenosAires]="BuenosAires";
                enumMap[City::Bogota]="Bogota";
                enumMap[City::Lima]="Lima";
                enumMap[City::Santiago]="Santiago";
                enumMap[City::Miami]="Miami";
                enumMap[City::MexicoCity]="MexicoCity";
                enumMap[City::LosAngeles]="LosAngeles";
                enumMap[City::SanFrancisco]="SanFrancisco";
                enumMap[City::Chicago]="Chicago";
                enumMap[City::Atlanta]="Atlanta";
                enumMap[City::Washington]="Washington";
                enumMap[City::Montreal]="Montreal";
                enumMap[City::NewYork]="NewYork";
                enumMap[City::Madrid]="Madrid";
                enumMap[City::London]="London";
                enumMap[City::Paris]="Paris";
                enumMap[City::Milan]="Milan";
                enumMap[City::Essen]="Essen";
                enumMap[City::StPetersburg]="StPetersburg";
                enumMap[City::Moscow]="Moscow";
                enumMap[City::Istanbul]="Istanbul";
                enumMap[City::Algiers]="Algiers";
                enumMap[City::Cairo]="Cairo";
                enumMap[City::Riyadh]="Riyadh";
                enumMap[City::Baghdad]="Baghdad";
                enumMap[City::Tehran]="Tehran";
                enumMap[City::Karachi]="Karachi";
                enumMap[City::Mumbai]="Mumbai";
                enumMap[City::Delhi]="Delhi";
                enumMap[City::Kolkata]="Kolkata";
                enumMap[City::Chennai]="Chennai";
                enumMap[City::Jakarta]="Jakarta";
                enumMap[City::HoChiMinhCity]="HoChiMinhCity";
                enumMap[City::Bangkok]="Bangkok";
                enumMap[City::HongKong]="HongKong";
                enumMap[City::Shanghai]="Shanghai";
                enumMap[City::Beijing]="Beijing";
                enumMap[City::Seoul]="Seoul";
                enumMap[City::Tokyo]="Tokyo";
                enumMap[City::Osaka]="Osaka";
                enumMap[City::Taipei]="Taipei";
                enumMap[City::Manila]="Manila";
                enumMap[City::Sydney]="Sydney";


            }










}