#ifndef MINUSEQUALS_H
#define MINUSEQUALS_H
#include "complexnum.h"

void operator -=(Complex& lhs, Complex& rhs) {
	lhs.re=lhs.re-rhs.re;
	lhs.im=lhs.im-rhs.im;
}
#endif
