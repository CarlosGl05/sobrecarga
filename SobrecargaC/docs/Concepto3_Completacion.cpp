#include <iostream>
using namespace std;

class Empleado {
public:
    string nombre;
    int id;
    Empleado(string n, int i) : nombre(n), id(i) {}
    friend ostream& operator << (ostream& os, const Empleado& emp){
        os << "Empleado[" << emp.id << "]: " << emp.nombre;
        return os;
    }
};

int main() {
    Empleado e("Ana", 101);
    cout << e << endl;  // Empleado[101]: Ana
    return 0;
}