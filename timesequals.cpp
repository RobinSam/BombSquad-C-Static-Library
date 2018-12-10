#include "complex.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Times Equals Operator
Author: Chris Smith
Description: Overloads + operator to allow for multiplying a complex number by another. 
Created: 12/7/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary:      Multiplies the complex number on the left hand sign of the operation
 *               by the complex number on the right hand side.
 * Parameters:   rhs - The Complex number object to multiply by
 * Return:       None
 */

void Complex:: operator *=(const Complex& rhs) {
	Complex temp = *this;
   temp=temp*rhs;
	*this = temp;
}
