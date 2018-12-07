#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
using namespace std;

class Complex
{
    friend ostream& operator <<(ostream& lhs, Complex& rhs);
    friend void operator >>(istream& lhs, Complex& rhs);
    friend Complex abs(Complex& rhs);
    friend Complex conj(Complex& rhs);
    friend Complex norm(Complex& rhs);
    friend Complex exp(Complex& rhs);
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
        void operator =(Complex& rhs);
};
#endif

