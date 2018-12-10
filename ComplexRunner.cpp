#include <stdlib.h>
#include <iostream>
#include "complex.h"

using namespace std;


int main ()
{
   cout << "Hello World" << endl;
   
   
     Complex a = Complex(5.0,6.0);
     Complex b;
   
     cout << "Enter b: " << endl;
     cin >> b;
   
     cout << "hello" << endl;
     cout << "a = " << a << "\n";
     cout << "b = " << b << "\n";
   
     cout << "a + b = " << a + b << "\n";
     cout << "a * b = " << a * b << "\n";
     cout << "a / b = " << a / b << "\n";
     
     cout << "Function tests" << endl;
     cout << "|a| = "   << abs(a) << "\n";
     cout << "complex conjugate of a = " << conj(a) << "\n";
     cout << "norm of a = " << norm(a) << "\n";
     cout << "the sin of a = " << sin(a) << endl;
     cout << "the phase in Radians of a = " << arg(a) << endl;
     cout << "the sqrt of a = " << "NaN" << endl;
     cout << "the natural log of a = " << "NaN" << endl;
     cout << "the acosh of a = " << "NaN" << endl;
     cout << "rounded to 2 decimal places = " << "NaN" << endl;
     

   
   
   /*
    Complex z1 = Complex(2.0, 4.0);
    Complex z2 = Complex(3.0, 7.0);
   
    z1 += z2;
   
    cout << "Complex number example: " << z1 << endl;
    cout << "The conjugate is: " << conj(z1) << endl;
    cout << "The magnitude is: " << abs(z1) << endl;
    cout << "The phase in Radians is: " << arg(z1) << endl;
    cout << "The norm is: " << norm(z1) << endl;
    cout << "The sqrt is: " << "NaN" << endl;
    cout << "The natural log is: " << "NaN" << endl;
    cout << "The sin is: " << sin(z1) << endl;
    cout << "The acosh is: " << "NaN" << endl;
    cout << "Rounded to 2 decimal places: " << "NaN" << endl;
     */
   
}

