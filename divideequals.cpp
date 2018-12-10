/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex /= Function
Author: Robin Sam 
Description: Overloads /= operator for complex numbers.
Created: 12/7/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/
/*
 * Summary: Self divides a complex number by another complex number
             and assigns the result to the original complex number.
 * Parameters:   complex rhs - the complex number by which you are dividing this complex number by.
 * Return:       none
 */
#include "complex.h"

void Complex:: operator /=(const Complex& rhs){
   Complex temp = *this;
   temp = temp/rhs;
   *this = temp;
}
