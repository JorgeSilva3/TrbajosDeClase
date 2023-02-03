#include <iostream>
using namespace std;

int main() {
    //Variables
    int n, primero = 0, segundo = 1, siguiente;
    //Número de términos
    cout << "Ingrese el numero de terminos: ";
    cin >> n;

    cout << "La secuencia es:";
    //Secuencia
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            siguiente = i;
        }
        else {
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }

        cout << siguiente;
    }

    return 0;
}