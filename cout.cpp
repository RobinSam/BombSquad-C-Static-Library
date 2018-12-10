#include "complex.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ostream& operator <<(ostream& lhs, const Complex& rhs){
  lhs << rhs.re << "+" << rhs.im << "i" << endl;
  return lhs;
}
