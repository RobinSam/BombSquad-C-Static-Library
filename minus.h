#ifndef MINUS_H
#define MINU_H
#include "complexnum.h"
using namespace std;

Complex operator -(Complex& lhs, Complex& rhs) {
	Complex temp = new Complex();
	temp.re=arg1.re-arg2.re;
	temp.im=arg1.im-arg2.im;
	return temp;
}
#endif