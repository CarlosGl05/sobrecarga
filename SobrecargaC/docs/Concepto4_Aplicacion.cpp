#include <iostream>
using namespace std;

class Contador{
    public:
        int valor;
        Contador(int v) : valor(v) {}
        Contador operator ++(int){
            valor++;
            return *this;
        }
};

int main() {
    Contador con(5);
    cout << "Valor inicial: " << con.valor << endl;
    con++;
    cout << "Valor final: " << con.valor << endl;
    return 0;
}