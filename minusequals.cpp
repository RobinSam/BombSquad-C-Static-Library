#include <iostream>
#include "COMPLEXCLASS.h"
using namespace std:
void operator -(complexValue& lhs, complexValue* rhs) {
	ComplexValue temp = new ComplexValue();
	temp.re=arg1.re-arg2->re;
	temp.im=arg1.im-arg2->im;
	lhs=temp;
	return lhs;
}