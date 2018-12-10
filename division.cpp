/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Arg Function
Author: Robin Sam 
Description: Overloads / operator for complex numbers to accurately divide complex numbers.
Created: 12/10/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

#include "complex.h"
using namespace std;

Complex Complex:: operator /(const Complex& rhs){
   Complex temp = *this;
   temp.re = ((temp.re*rhs.re)+(temp.im*rhs.im))/(rhs.re*rhs.re+rhs.im*rhs.im);
   temp.im = (temp.im*rhs.re-temp.re*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
   return temp;
}
