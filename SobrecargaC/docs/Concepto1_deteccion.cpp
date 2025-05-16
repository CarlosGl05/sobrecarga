#include <iostream>
using namespace std;

class Complejo {
public:
 double re, im;
 Complejo(double r, double i) : re(r), im(i) {}
 Complejo operator+(const Complejo& otro) {
     return Complejo(re + otro.re, im + otro.im);
 }
};