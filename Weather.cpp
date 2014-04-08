
/*Isabelle Hillberg, lab9,
CSE20212, Weather.h*/

#include<iostream>
#include "Weather.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

Weather::Weather(){
        srand(time(0));
        temp = rand() % 3;
        sun = rand() % 3;
}

Weather::Weather(int t, int s){
        temp=t;
        sun=s;
}

string Weather::text(int num, char s){
        if(s == 't'){
                switch(num){
                        case 1:
                               	return "chilly";
                        case 2:
                               	return "warm";
                        case 3:
                               	return "hot";
                        default:
                                return "warm";
                }
        } else if (s == 's'){
                switch(num){
                        case 1:
                               	return "rainy";
                        case 2:
                               	return "cloudy";
                        case 3:
                               	return "sunny";
                        default:
                                return "sunny";
                }
        } else {
                return "error";
        }
}

ostream &operator<<(ostream &output, Weather &w){
        output << "It is " << w.text(w.temp, 't') << " out with a "
                << w.text(w.sun, 's') << " sky" << endl;
        return output;
}
