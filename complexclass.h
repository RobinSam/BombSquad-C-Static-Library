#ifndef COMPLEXCLASS
#define COMPLEXCLASS
#include "add.h"
#include "multiplication.h"
using namespace std;

class complex
{
    double re, im;
    friend complex operator +(complex& lhs, complex& rhs);
    friend complex operator -(complex& lhs, complex& rhs);
    friend complex operator *(complex& lhs, complex& rhs);
    friend complex operator /(complex& lhs, complex& rhs);
    friend complex operator +=(complex& lhs, complex& rhs);
    friend complex operator -=(complex& lhs, complex& rhs);
    friend complex operator *=(complex& lhs, complex& rhs);
    friend complex operator /=(complex& lhs, complex& rhs);
    public:
        complex();
        complex(double r, double i);
        getReValue();
        getImValue();
        getValue();
};
#endif
