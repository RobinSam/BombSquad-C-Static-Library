/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Arg Function
Author: Robin Sam 
Description: Overloads /= operator to self divide a complex number by another complex number
             and assign the result to the original complex number.
Created: 12/10/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

#include "complex.h"

void Complex:: operator /=(const Complex& rhs){
   Complex temp = *this;
   temp = temp/rhs;
   *this = temp;
}