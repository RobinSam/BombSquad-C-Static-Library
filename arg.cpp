/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Arg Function
Author: Robin Sam 
Description: Function for the phase of a complex number in Radians.
Created: 12/10/2018
Modified: 12/10/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/
/*
 * Summary: Calculates the degrees in Radians for a complex number after checking to see
 *          if the real, imaginary or both are negative and subtracting from PI if needed.
 * Parameters:   complex rhs - the complex number for which the angle is being calculated.
 * Return:       degrees in Radians of type double
 */

#include "math.h"
#include "complex.h"
#define PI 3.14159265

double arg(Complex& rhs) {
//check if re is <0, im is <0 or both are <0
if (rhs.re<0 && rhs.im<0) 
  return atan(rhs.im/rhs.re)+PI;
else if (rhs.re < 0 && rhs.im >0)
  return PI-atan(rhs.im/rhs.re);
else
  return atan(rhs.im/rhs.re);
}
