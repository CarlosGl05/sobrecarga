#include <iostream>
using namespace std;

class Punto{
    public:
    int x,y;
    Punto(int X, int Y): x(X), y(Y) {}
    bool operator== (const Punto& otro){
        return x == otro.x && y == otro.y;
    }
};
int main(){
    Punto a(5,5);
    Punto b(5,5);
    Punto c(5,6);
    cout << std::boolalpha;
    cout << (a == b) << endl;
    cout << (a == c) << endl;

    return 0;
}