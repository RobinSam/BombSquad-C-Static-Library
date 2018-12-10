#include "complex.h"
/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : Complex conjugate function
Author : Chinmay Murthy
Description :Returns the conjugate of the input
Modified : 12/5/2018
*/
using namespace std;
/*
 * Summary: Takes a complex number and multiplies the imaginary part by -1
 * Parameters: Complex number to take conjugate of
 * Return:  Complex number with a negative imaginary part
 */
Complex conj(Complex& lhss){
   lhss.im*=-1;
   return lhss;
}
