#include "complex.h"

bool Complex:: operator =(Complex& rhs)
{
   if((this->re == rhs.re) && (this->im == rhs.im))
      return true;
   else return false;
}