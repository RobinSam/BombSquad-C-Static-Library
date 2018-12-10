#include "complex.h"
#include <cmath>

double sin(Complex& com) {
   return sin(com.re)*cosh(com.im)+com.im*cos(com.re)*sinh(com.im);
}