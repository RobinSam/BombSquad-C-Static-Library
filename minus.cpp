#include "complex.h"
/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : subtraction operator
Author : Chinmay Murthy
Description :Subtracts two complex arguments
Modified : 12/3/2018
*/
using namespace std;
/*
 * Summary: Returns new complex number that is the result of the difference of each part of the number on the left
 * hand side and the number to the right of the operator
 * Parameters:   Complex number to be subtracted from the other
 * Return:       Difference of the two
 */
Complex Complex:: operator -(const Complex& rhs) {
	Complex temp = *this;
	temp.re=temp.re-rhs.re;
	temp.im=temp.im-rhs.im;
	return temp;
}
