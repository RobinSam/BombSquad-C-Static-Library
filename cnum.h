#ifndef CNUM_H
#define CNUM_H
#include "add.h"
#include "multiplication.h"
using namespace std;

class cnum
{
    double re, im;
    friend cnum operator +(cnum& lhs, cnum& rhs);
    friend cnum operator -(cnum& lhs, cnum& rhs);
    friend cnum operator *(cnum& lhs, cnum& rhs);
    friend cnum operator /(cnum& lhs, cnum& rhs);
    friend cnum operator +=(cnum& lhs, cnum& rhs);
    friend cnum operator -=(cnum& lhs, cnum& rhs);
    friend cnum operator *=(cnum& lhs, cnum& rhs);
    friend cnum operator /=(cnum& lhs, cnum& rhs);
    public:
        cnum();
        cnum(double r, double i);
        double getReValue();
        double getImValue();
        string getValue();
};
#endif

