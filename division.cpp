/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex division Function
Author: Robin Sam 
Description: Overloads / operator for complex numbers.
Created: 12/3/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/
/*
 * Summary: Divides complex numbers using a formula that utilizes the real and imaginary parts of both complex numbers.
 * Parameters:   complex rhs - the denominator for the division where the numerator is this current complex number
 * Return: The resulting complex number of the division.
 */

#include "complex.h"
using namespace std;

Complex Complex:: operator /(const Complex& rhs){
   Complex temp = *this;
   temp.re = ((temp.re*rhs.re)+(temp.im*rhs.im))/(rhs.re*rhs.re+rhs.im*rhs.im); // equation to divide real parts of complex numbers
   temp.im = (temp.im*rhs.re-temp.re*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im); // equation to divide imaginary parts of complex numbers
   return temp;
}
