#include "complexnum.h"
#include <string>
using namespace std;

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
