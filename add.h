#ifndef ADD_H
#define ADD_H
#include "complexclass.h"

complex operator +(complex& lhs, complex& rhs);
{
    complex temp = rhs;
    temp.re = lhs.re + rhs.re;
    temp.im = lhs.im + rhs.im;
    return temp;
}
#endif
