#ifndef MINUSEQUALS_H
#define MINUSEQUALS_H
#include "complex.h"

complex operator -(complex& lhs, complex& rhs) {
	complex temp = rhs;
	temp.re=arg1.re-arg2.re;
	temp.im=arg1.im-arg2.im;
	lhs=temp;
	return lhs;
}