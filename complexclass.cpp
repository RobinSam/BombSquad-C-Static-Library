#include "complexclass.h"
using namespace std;

class complex
{
    double re, im;
    public:
        complex()
        {
            re = 0;
            im = 0;
        }
        complex(double r, double i)
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
            string temp = re + " " + im + "i";
            return temp;
        }
};
