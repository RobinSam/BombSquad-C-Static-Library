#include "complex.h"

Complex Complex:: operator *(Complex& lhs, Complex& rhs){
    Complex temp = rhs;
    temp.re = (lhs.re * rhs.re) - (lhs.im * rhs.im);
    temp.im = (lhs.re * rhs.im) + (lhs.im * rhs.re);
    return temp;
}
