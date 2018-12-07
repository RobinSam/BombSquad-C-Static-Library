#include "complex.h"

void Complex:: operator =(Complex& rhs)
{
   this->re = rhs.re;
   this->im = rhs.im;
}