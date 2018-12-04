#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H
#include <string>
using namespace std;

class Complex
{
    friend Complex operator +(Complex& lhs, Complex& rhs);
    friend Complex operator -(Complex& lhs, Complex& rhs);
    friend Complex operator *(Complex& lhs, Complex& rhs);
    friend Complex operator /(Complex& lhs, Complex& rhs);
    friend void operator +=(Complex& lhs, Complex& rhs);
    friend void operator -=(Complex& lhs, Complex& rhs);
    friend void operator *=(Complex& lhs, Complex& rhs);
    friend void operator /=(Complex& lhs, Complex& rhs);
    public:
        double re, im;
        Complex();
        Complex(double r, double i);
        double getReValue();
        double getImValue();
        string getValue();
};
#endif

