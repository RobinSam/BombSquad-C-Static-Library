#include "COMPLEXCLASS.h"
#include <iostream>
using namespace std;

complex operator * (complex& lhs, complex* rhs){
    complex temp = *rhs;
    temp.real = (lhs.real * rhs->real) - (lhs.im * rhs->im);
    temp.im = (lhs.real * rhs->im) + (lhs.im * rhs->real);
    return temp;
}