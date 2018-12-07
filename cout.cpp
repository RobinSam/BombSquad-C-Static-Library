#include "complex.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ostream& operator <<(ostream& lhs, Complex& rhs){
  lhs << rhs.re << "+" << rhs.im << "i" << endl;
  return lhs;
}
