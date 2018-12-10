#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
using namespace std;

class Complex
{
    friend ostream& operator <<(ostream& lhs, const Complex& rhs);
    friend istream& operator >>(istream& lhs, Complex& rhs);
    friend double abs(Complex& com);
    friend Complex& conj(Complex& rhs);
    friend double norm(Complex& com);
    friend Complex& exp(Complex& rhs);
    friend double sin(Complex& com);
    public:
        double re, im;
        Complex();
        Complex(double r, double i);
        Complex(double r);
        double getReValue();
        double getImValue();
        string getValue();
        Complex operator +(const Complex& rhs);
        Complex operator -(const Complex& rhs);
        Complex operator *(const Complex& rhs);
        Complex operator /(const Complex& rhs);
        void operator +=(const Complex& rhs);
        void operator -=(const Complex& rhs);
        void operator *=(const Complex& rhs);
        void operator /=(const Complex& rhs);
        void operator =(const Complex& rhs);
};
#endif

