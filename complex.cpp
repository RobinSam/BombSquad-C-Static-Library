#include "complex.h"
#include <string>
using namespace std;

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Class
Author: Lucas Teltow 
Description: Defines the Complex object and get functions for variables. 
Created: 12/4/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

Complex::Complex()
{
    re = 0;
    im = 0;
}

Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}

Complex::Complex(double r)
{
    re = r;
    im = 0;
}

double Complex::getReValue()
{
    return re;
}

double Complex::getImValue()
{
    return im;
}

string Complex::getValue()
{
    string temp = to_string(re) + " " + to_string(im) + "i";
    return temp;
}
