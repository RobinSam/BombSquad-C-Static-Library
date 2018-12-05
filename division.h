#include "complex.h"
using namespace std;

Complex Complex:: operator /(Complex& lhs, Complex& rhs){
   Complex temp = rhs;
   temp.re = ((lhs.re*rhs.re)+(lhs.im*rhs.im))/(rhs.re*rhs.re+rhs.im*rhs.im);
   temp.im = (lhs.im*rhs.re-lhs.re*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
   return temp;
}
