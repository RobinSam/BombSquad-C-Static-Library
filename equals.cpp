#include "complex.h"

Complex Complex:: operator =(Complex& rhs)
{
   this.re = rhs.re;
   this.im = rhs.im;
}