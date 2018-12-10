#include "complex.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Norm Function
Author: Lucas Teltow 
Description: Takes in a complex number and returns the magnitude of the number. 
Created: 12/6/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary:      Takes in a complex number and returns the magnitude of the number.
 * Parameters:   Complex object
 * Return:       Double equal to the magnitude of the complex object.
 */

double norm(Complex& com)
{
   double real = com.re;
   double imaginary = com.im;
   real = real * real;
   imaginary = imaginary * imaginary;
   real = real + imaginary;
   return real;
}