#include "complex.h"

Complex Complex:: operator *(const Complex& rhs){
    Complex temp = *this;
    temp.re = (temp.re * rhs.re) - (temp.im * rhs.im);
    temp.im = (temp.re * rhs.im) + (temp.im * rhs.re);
    return temp;
}
