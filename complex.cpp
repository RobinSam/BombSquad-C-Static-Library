#include "complexnum.h"
#include <string>
using namespace std;

complexNum
{
    double re, im;
    public:
        complexNum()
        {
            re = 0;
            im = 0;
        }
        complexNum(double r, double i)
        {
            re = r;
            im = i;
        }
        double getReValue()
        {
            return re;
        }
        double getImValue()
        {
            return im;
        }
        string getValue()
        {
            string temp = to_string(re) + " " + to_string(im) + "i";
            return temp;
        }
};
