#ifndef COMPLEXCLASS.h
#define COMPLEXCLASS.h
using namespace std;

class complexValue
{
    double re, im;
    friend complexValue operator +(complexValue& lhs, complexValue* rhs);
    friend complexValue operator -(complexValue& lhs, complexValue* rhs);
    friend complexValue operator *(complexValue& lhs, complexValue* rhs);
    friend complexValue operator /(complexValue& lhs, complexValue* rhs);
    friend complexValue operator +=(complexValue& lhs, complexValue* rhs);
    friend complexValue operator -=(complexValue& lhs, complexValue* rhs);
    friend complexValue operator *=(complexValue& lhs, complexValue* rhs);
    friend complexValue operator /=(complexValue& lhs, complexValue* rhs);
    public:
        complexValue();
        complexValue(double r, double i);
};
#endif
