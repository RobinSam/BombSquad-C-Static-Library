#include "complex.h"
using namespace std;

Complex Complex:: operator -(Complex& rhs) {
	Complex temp = *this;
	temp.re=temp.re-rhs.re;
	temp.im=temp.im-rhs.im;
	return temp;
}
