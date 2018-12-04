#ifndef ADD_H
#define ADD_H
#include "complexnum.h"

Complex operator +(Complex& lhs, Complex& rhs)
{
    Complex temp = rhs;
    temp.re = lhs.re + rhs.re;
    temp.im = lhs.im + rhs.im;
    return temp;
}
#endif
