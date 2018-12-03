#ifndef ADD_H
#define ADD_H
#include "cnum.h"

cnum operator +(cnum& lhs, cnum& rhs);
{
    cnum temp = rhs;
    temp.re = lhs.re + rhs.re;
    temp.im = lhs.im + rhs.im;
    return temp;
}
#endif
