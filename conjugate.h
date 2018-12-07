#ifndef CONJ_H
#define CONJ_H
#include "complexnum.h"

using namespace std;

Complex conj(Complex& lhss){
   lhss.im*=-1;
   return lhss;
}
