#include "complex.h"
/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : -= operator
Author : Chinmay Murthy
Description :Overloaded operator for complex arguments
Modified : 12/5/2018
*/
/*
 * Summary: Assigns to complex number on the left side of the operation the difference of it and the number
 * on the right hand side of the operation
 * Parameters:   Complex number to be subtracted from the other
 * Return:       Difference of the two
 */
void Complex:: operator -=(const Complex& rhs) {
	Complex temp = *this;
	temp=temp-rhs;
	*this = temp;
}
