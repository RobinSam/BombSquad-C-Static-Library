#include "complex.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Addition Operator
Author: Chris Smith
Description: Overloads + operator to allow for addition of complex numbers. 
Created: 11/28/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary:      Adds two complex numbers together
 * Parameters:   rhs - The Complex number object to add with on the 
 *               right hand side of the + operation
 * Return:       The resulting complex number object after being added
 */

Complex Complex:: operator +(const Complex& rhs)
{
    Complex temp = *this;
    temp.re = temp.re + rhs.re;
    temp.im = temp.im + rhs.im;
    return temp;
}

