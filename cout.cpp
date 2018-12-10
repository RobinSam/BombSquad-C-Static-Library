#include "complex.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>

 /* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title : Cout Function
Author : Ibraheem Moosa
Description : Overloads << operator to allow for output (printing) of complex numbers.
Created : 12/2/18
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

/*
 * Summary: "Couts" (displays/prints) a complex number
 * Parameters: rhs the complex number on the right cout (print)
 * Return: An output stream containing the complex number to be printed
 */

using namespace std;

ostream& operator <<(ostream& lhs, const Complex& rhs){
  lhs << rhs.re << "+" << rhs.im << "i" << endl;
  return lhs;
}
