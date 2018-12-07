#include "complex.h"
#include "math.h"

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