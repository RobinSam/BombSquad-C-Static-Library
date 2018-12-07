#include "complex.h"
using namespace std;

Complex& Complex:: operator /(const Complex& rhs){
   Complex temp = *this;
   temp.re = ((temp.re*rhs.re)+(temp.im*rhs.im))/(rhs.re*rhs.re+rhs.im*rhs.im);
   temp.im = (temp.im*rhs.re-temp.re*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
   return temp;
}
