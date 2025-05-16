#include <iostream>
using namespace std;

class Complejo {

    public:

    double real, imaginario;
    Complejo(double r, double i) : real(r), imaginario(i) {}
    Complejo operator+(const Complejo& otro) {
        return Complejo(real + otro.real, imaginario + otro.imaginario);
    }

};

int main() {
    Complejo a(1, 2);
    Complejo b(3, -1);
    Complejo c = a + b;
    cout << "La suma de los complejos es: " << c.real << " + " << c.imaginario << "i" << endl;

    return 0;
}