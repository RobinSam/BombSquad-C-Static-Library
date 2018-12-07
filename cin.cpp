#include <iostream.h>
#include "complex.h"
void operator >>(istream& lhs, Complex& rhs) {
string input1 = "";
istream>>input1;
rhs.re=stod(input1.substr(0,3));
rhs.im = stod(input1.substr(4,3));
}
