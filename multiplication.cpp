#include "complex.h"

 /* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : Multiplication Function
Author : Ibraheem Moosa
Description : Overloads * operator to allow for multiplication of complex numbers.
Created : 12/2/18
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary: Multiplies two complex numbers
 * Parameters: rhs the complex number on the right to multiply by
 * Return: The complex product of the two complex numbers 
 */

Complex Complex:: operator *(const Complex& rhs){
    Complex temp = *this;
    temp.re = (temp.re * rhs.re) - (temp.im * rhs.im);
    temp.im = (temp.re * rhs.im) + (temp.im * rhs.re);
    return temp;
}
