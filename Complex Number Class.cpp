#include <iostream>
#include "Complex Number Class.h"
using namespace std;

class complexValue
{
    double re, im;
    public:
        complexValue()
        {
            re = 0;
            im = 0;
        }
        complexValue(double r, double i)
        {
            re = r;
            im = i;
        }
};
