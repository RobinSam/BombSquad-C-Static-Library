#include "complex.h"
#include <string>
using namespace std;

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Class
Author: Lucas Teltow 
Description: Defines the Complex object and get functions for variables. 
Created: 12/4/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary:      Default constructor for a complex class.
 * Parameters:   None
 * Return:       Creates a Complex object with re = 0 and im = 0.
 */
 
Complex::Complex()
{
    re = 0;
    im = 0;
}

/*
 * Summary:      Constructor for a complex class given a real and an imginary part.
 * Parameters:   r - Real number portion, i - Imaginary number portion.
 * Return:       Creates a Complex object with re = r and im = i.
 */

Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}

/*
 * Summary:      Constructor for a complex class given just a real part.
 * Parameters:   r - Real number porion.
 * Return:       Creates a Complex object with re = r and im = 0.
 */

Complex::Complex(double r)
{
    re = r;
    im = 0;
}

/*
 * Summary:      Feteches the real portion of a complex number.
 * Parameters:   None
 * Return:       Real part of Complex object.
 */

double Complex::getReValue()
{
    return re;
}

/*
 * Summary:      Feteches the imaginary portion of a complex number.
 * Parameters:   None
 * Return:       Imgainary part of Complex object.
 */

double Complex::getImValue()
{
    return im;
}

/*
 * Summary:      Outpust the entire complex number.
 * Parameters:   None
 * Return:       A string of the complex number.
 */

string Complex::getValue()
{
    string temp = to_string(re) + " " + to_string(im) + "i";
    return temp;
}
