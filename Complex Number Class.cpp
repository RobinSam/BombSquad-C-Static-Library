#include <iostream>
#include "Complex Number Class.h"
using namespace std;

class complexValue
{
    double real, im;
    public:
        complexValue()
        {
            real = 0;
            im = 0;
        }
        complexValue(double r, double i)
        {
            real = r;
            im = i;
        }
};
