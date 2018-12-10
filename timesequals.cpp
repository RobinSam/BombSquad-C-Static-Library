#include "complex.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Multiply Equals Operator
Author: Lucas Teltow 
Description: Overloads *= operator to allow for multiplication of complex number times itself and another number. 
Created: 12/4/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

void Complex:: operator *=(const Complex& rhs) {
	Complex temp = *this;
   temp=temp*rhs;
	*this = temp;
}
