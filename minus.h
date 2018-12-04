#ifndef MINUS_H
#define MINU_H
#include "complexnum.h"
using namespace std;

Complex operator -(Complex& lhs, Complex& rhs) {
	Complex temp = Complex();
	temp.re=lhs.re-rhs.re;
	temp.im=lhs.im-rhs.im;
	return temp;
}
#endif
