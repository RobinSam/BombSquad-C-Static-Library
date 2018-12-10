#include "math.h"
#include "complex.h"
#define PI 3.14159265
double arg(Complex& rhs) {
if (rhs.re<0 && rhs.im<0)
  return atan(rhs.im/rhs.re)+PI;
else if (rhs.re < 0 && rhs.im >0)
  return PI-atan(rhs.im/rhs.re);
else
  return atan(rhs.im/rhs.re);
}