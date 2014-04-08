/*Isabelle Hillberg, lab9,
CSE20212, Weather.h*/

#ifndef WEATHER_H
#define WEATHER_H

#include<iostream>

using namespace std;

class Weather{
	friend ostream &operator<<(ostream &output, Weather &w);

        public:
        Weather();
        Weather(int, int);
        string text(int, char);

        private:
        int temp;
        int sun;

};
#endif

