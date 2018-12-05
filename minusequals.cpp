#include "complex.h"

void Complex:: operator -=(Complex& lhs, Complex& rhs) {
	lhs.re=lhs.re-rhs.re;
	lhs.im=lhs.im-rhs.im;
}
