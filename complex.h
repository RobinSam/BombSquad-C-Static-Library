#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
using namespace std;

class Complex
{
    public:
        double re, im;
        Complex();
        Complex(double r, double i);
        double getReValue();
        double getImValue();
        string getValue();
        Complex operator +(Complex& lhs, Complex& rhs);
        Complex operator -(Complex& lhs, Complex& rhs);
        Complex operator *(Complex& lhs, Complex& rhs);
        Complex operator /(Complex& lhs, Complex& rhs);
        void operator +=(Complex& lhs, Complex& rhs);
        void operator -=(Complex& lhs, Complex& rhs);
        void operator *=(Complex& lhs, Complex& rhs);
        void operator /=(Complex& lhs, Complex& rhs);
};
#endif

