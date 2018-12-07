#include "complex.h"

Complex& Complex:: operator +(const Complex& rhs)
{
    Complex temp = *this;
    temp.re = temp.re + rhs.re;
    temp.im = temp.im + rhs.im;
    return temp;
}

