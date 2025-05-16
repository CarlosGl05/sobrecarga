#include <iostream>
using namespace std;
#include <string>

class Empleado {
    public:
        string nombre;
        int Id;
        Empleado(string n, int id) : nombre(n), Id(id) {}
        friend ostream& operator<<(ostream& os, const Empleado& emp) {
            os << "Nombre: " << emp.nombre << ", Id: " << emp.Id;
            return os;
        }
};


int main(){

    Empleado a1("Carlos", 001), a2("Andrés", 002);
    cout << "Empleado 1: " << a1 << endl;
    cout << "Empleado 2: " << a2 << endl;
}