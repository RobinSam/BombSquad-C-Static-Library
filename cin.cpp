/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Arg Function
Author: Robin Sam 
Description: Overloads >> operator to accurately take in the parameters of a complex number as input
             and assign the input to a predefined complex variable.
Created: 12/10/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

#include <iostream>
#include "complex.h"
istream& operator >>(istream& lhs, Complex& rhs) {
   cout << "Enter Real Part: ";
   lhs >> rhs.re;
   cout << "Enter Imagenary Part: ";
   lhs >> rhs.im;
   return lhs;
}
