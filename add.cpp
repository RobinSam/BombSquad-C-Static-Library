#include "complex.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Addition Operator
Author: Lucas Teltow 
Description: Overloads + operator to allow for addition of complex numbers. 
Created: 12/2/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

Complex Complex:: operator +(const Complex& rhs)
{
    Complex temp = *this;
    temp.re = temp.re + rhs.re;
    temp.im = temp.im + rhs.im;
    return temp;
}

