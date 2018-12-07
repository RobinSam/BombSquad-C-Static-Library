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
        Complex(double r);
        double getReValue();
        double getImValue();
        string getValue();
        Complex operator +(Complex& rhs);
        Complex operator -(Complex& rhs);
        Complex operator *(Complex& rhs);
        Complex operator /(Complex& rhs);
        void operator +=(Complex& rhs);
        void operator -=(Complex& rhs);
        void operator *=(Complex& rhs);
        void operator /=(Complex& rhs);
};
#endif

