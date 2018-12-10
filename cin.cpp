#include <iostream>
#include "complex.h"
/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : Cin
Author : Chinmay Murthy
Description : Overloads cin operator to take complex numbers
Modified : 12/7/2018
*/
/*
 * Summary: Takes in a real and imaginary part of a complex numbers and assigns those values to a Complex object
 * Parameters:   input stream to assign data to, complex number to which the parts will be attatched
 * Return:       Input stream containing the input
 */
istream& operator >>(istream& lhs, Complex& rhs) {
   cout << "Enter Real Part: ";
   lhs >> rhs.re;
   cout << "Enter Imagenary Part: ";
   lhs >> rhs.im;
   return lhs;
}
