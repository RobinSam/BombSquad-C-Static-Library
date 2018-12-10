#include "complex.h"
#include <cmath>

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Sine Function
Author: Chris Smith
Description: Function to calculate the sine of a given complex number.
Created: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary:      Calculates the sin of the given complex number.
 * Parameters:   com - The Complex number to find the sine of
 * Return:       A double representing the sine of the provided complex number.
 */

double sin(Complex& com) {
   return sin(com.re)*cosh(com.im)+com.im*cos(com.re)*sinh(com.im);
}