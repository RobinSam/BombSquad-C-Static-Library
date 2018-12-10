/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex cin Function
Author: Robin Sam 
Description: Overloads >> operator to accurately take in the parameters of a complex number as input
             and assign the input to a predefined complex variable.
Created: 12/7/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/
/*
 * Summary: Takes in a real and imaginary part of a complex numbers and assigns those values to a Complex object
 * Parameters:   input stream to assign data to, complex number to which the parts will be attatched
 * Return:       Input stream containing the input
 */
#include <iostream>
#include "complex.h"

istream& operator >>(istream& lhs, Complex& rhs) {
   cout << "Enter Real Part: ";
   lhs >> rhs.re;
   cout << "Enter Imaginary Part: ";
   lhs >> rhs.im;
   return lhs;
}
