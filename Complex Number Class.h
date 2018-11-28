#include <iostream>
using namespace std;

class complexValue
{
    double real, im;
    public:
        complexValue(double r, double i)
           { 
               real = r;
               im = i;
           } 
        complexValue()
           {
               real = 0.0;
               im = 0.0;
           }
};
