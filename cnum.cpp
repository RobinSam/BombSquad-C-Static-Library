#include "cnum.h"
#include <string>
using namespace std;

class cnum
{
    double re, im;
    public:
        cnum()
        {
            re = 0;
            im = 0;
        }
        cnum(double r, double i)
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
