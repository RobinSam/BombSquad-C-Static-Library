#include <iostream>
#include COMPLEXCLASS.h
using namespace std:
complexValue operator -(complexValue arg1, complexValue arg2) {
	ComplexValue temp = new ComplexValue();
	temp.real=arg1->real+arg2->real;
	return temp;
}