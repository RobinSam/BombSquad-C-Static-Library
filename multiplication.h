#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H
#include "complexclass.h"

complex operator *(complex& lhs, complex& rhs){
    complex temp = rhs;
    temp.re = (lhs.re * rhs.re) - (lhs.im * rhs.im);
    temp.im = (lhs.re * rhs.im) + (lhs.im * rhs.re);
    return temp;
}
#endif
