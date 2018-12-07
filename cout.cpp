#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ostream& Complex::operator <<(Complex* temp){
  //date, region, rep, item, units, unitCost, Total
  this << Complex->re << Complex->im;
  return this;
}