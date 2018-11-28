#include "COMPLEXCLASS_h"
#include <iostream>

complex operator +(complex& lhs, complex* rhs);
{
    complex temp = *lhs;
    temp.re = lhs.re + rhs->re;
    temp.im = lhs.im + rhs->im;
    return temp;
}