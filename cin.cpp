#include <iostream>
#include "complex.h"
istream& operator >>(istream& lhs, Complex& rhs) {
   cout << "Enter Real Part: ";
   lhs >> rhs.re;
   cout << "Enter Imagenary Part: ";
   lhs >> rhs.im;
   return lhs;
}
