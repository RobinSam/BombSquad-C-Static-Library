#include "complex.h"

void Complex:: operator /=(const Complex& rhs){
   Complex temp = *this;
   temp = temp/rhs;
   *this = temp;
}