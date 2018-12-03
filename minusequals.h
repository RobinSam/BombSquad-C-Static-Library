#ifndef MINUSEQUALS_H
#define MINUSEQUALS_H
#include "complexnum.h"

Complex operator -(Complex& lhs, Complex& rhs) {
	Complex temp = rhs;
	temp.re=arg1.re-arg2.re;
	temp.im=arg1.im-arg2.im;
	lhs=temp;
	return lhs;
}
#endif