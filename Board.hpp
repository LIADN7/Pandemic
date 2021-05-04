#pragma once
#include <iostream>
#include "City.hpp"
#include "Color.hpp"
#include <array>
#include <map>
#include <string>
#include <fstream>

using namespace std;

namespace pandemic{

    class gameMap{


        public:
            City my;
            Color col;
            bool re;
            int level;
            City mp [];


            gameMap(){
                
            }

            gameMap(City s, Color c1, City s1, City s2=City::nullCity, City s3=City::nullCity, City s4=City::nullCity, City s5=City::nullCity, City s6=City::nullCity){
                my=s;
                col=c1;
                int end=6;
                if(s2==City::nullCity){end=1;}
                else if(s3==City::nullCity){end=2;}
                else if(s4==City::nullCity){end=3;}
                else if(s5==City::nullCity){end=4;}
                else if(s6==City::nullCity){end=5;}
                City mp [end];
                
                if(end>=1){mp[0]=s1;}
                if(end>=2){mp[1]=s2;}
                if(end>=3){mp[2]=s3;}
                if(end>=4){mp[3]=s4;}
                if(end>=5){mp[4]=s5;} 
                if(end>=6){mp[5]=s6;}
                level=0;
                re=false;

            }
            
            
            int& getLevel(){return level;}
            bool& get_res(){return re;}
            Color getColor(){return col;}
            //*City getConnected(){return mp;}
            
            //bool& research() {return re;}
            //void in(City);    
            //bool is_neighbor(City);
    };



    class Board{
        map<City, gameMap> arr;
        map<City, string>  enumMap ;

        
        void doEnumMap();         
        
        
    public:

        //~Board();
        Board();
        gameMap getMap(City c){return arr[c];}
        string getCityName(City city);
        string getColorName(Color color);
        bool is_clean();
        void remove_cures();
        int& operator[](City city);
        friend ostream& operator<<(ostream& out, const Board& board);
        //void addCity(string s);
    
    };






}



