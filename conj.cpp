#include "complex.h"

using namespace std;

Complex& conj(Complex& rhs){
   rhs.im*=-1;
   return rhs;
}
