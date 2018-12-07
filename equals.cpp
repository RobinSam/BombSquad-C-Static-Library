#include "complex.h"

bool Complex:: operator =(Complex& lhs, Complex& rhs)
{
   if((lhs.re == rhs.re) && (lhs.im == rhs.im))
      return true;
   else return false;
}