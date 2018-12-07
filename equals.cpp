#include "complex.h"

void Complex:: operator =(const Complex& rhs)
{
   Complex temp = *this;
   temp.re = rhs.re;
   temp.im = rhs.im;
   *this = temp;
}