#import "complex.h"

void Complex:: operator /=(Complex& rhs){
   Complex temp = *this;
   temp = temp/rhs;
   *this = temp;
}