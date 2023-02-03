#include <iostream>
using namespace std;

int main() {
    //Variables
    int n;
    double num, suma = 0.0, promedio;
    //Cantidad de Elementos
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    //Ingresar elementos
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese un número: ";
        cin >> num;
        suma += num;
    }
    //Promedio
    promedio = suma / n;
    //Resultado
    cout << "El promedio de los números es: " << promedio << endl;

    return 0;
}