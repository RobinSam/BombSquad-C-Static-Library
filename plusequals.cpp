#include "complex.h"

 /* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : Minus Equals Function
Author : Ibraheem Moosa
Description : Overloads -= operator to allow for subtraction of a certain amount.
Created : 12/2/18
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary: Subtracts a complex number by another complex number
 * Parameters: rhs the complex number on the right to subtract by
 * Return: The complex resultant(difference) of the 2 complex numbers
 */

void Complex:: operator +=(const Complex& rhs) {
	Complex temp = *this;
	temp=temp+rhs;
	*this = temp;
}