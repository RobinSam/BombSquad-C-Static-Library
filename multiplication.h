#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H
#include "cnum.h"

cnum operator *(cnum& lhs, cnum& rhs){
    cnum temp = rhs;
    temp.re = (lhs.re * rhs.re) - (lhs.im * rhs.im);
    temp.im = (lhs.re * rhs.im) + (lhs.im * rhs.re);
    return temp;
}
#endif
