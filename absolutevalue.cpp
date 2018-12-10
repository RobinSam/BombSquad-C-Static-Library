#include "complex.h"
#include "math.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Absolute Value Function
Author: Lucas Teltow 
Description: Takes in a complex number and returns the absolute value of the complex number.
Created: 12/6/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

double abs(Complex& com)
{
   double real = com.re;
   double imaginary = com.im;
   real = real * real;
   imaginary = imaginary * imaginary;
   real = real + imaginary;
   sqrt(real);
   return real;
}