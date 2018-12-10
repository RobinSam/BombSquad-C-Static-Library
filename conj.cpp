/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : Complex conjugate function
Author : Chinmay Murthy
Description :Returns the conjugate of the input
Created : 12/5/2018
Modified : 12/5/2018
*/
/*
 * Summary: Takes a complex number and multiplies the imaginary part by -1
 * Parameters: Complex number to take conjugate of
 * Return:  Complex number with a negative imaginary part
 */
#include "complex.h"

using namespace std;

Complex& conj(Complex& rhs){
   rhs.im*=-1;
   return rhs;
}
