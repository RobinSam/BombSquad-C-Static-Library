#include "complex.h"
using namespace std;

Complex Complex:: operator -(Complex& lhs, Complex& rhs) {
	Complex temp = Complex();
	temp.re=lhs.re-rhs.re;
	temp.im=lhs.im-rhs.im;
	return temp;
}
