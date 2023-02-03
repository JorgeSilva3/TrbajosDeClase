#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    // Reemplaza esta función con la función que deseas integrar
    return x * x;
}

int main() {
    double a, b, h, sum;
    int n;
    //Ingresar parámetros
    cout << "Ingrese el limite inferior de la integracion: ";
    cin >> a;
    cout << "Ingrese el limite superior de la integracion: ";
    cin >> b;
    cout << "Ingrese el numero de subintervalos: ";
    cin >> n;
    //Fórmula del método
    h = (b - a) / (2 * n);
    sum = func(a) + func(b);
    //Sumatoria
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        sum += 4 * func(a + i * h);
    }

    for (int i = 2; i <= 2 * n - 2; i += 2) {
        sum += 2 * func(a + i * h);
    }
    //Resultdo
    sum = sum * h / 3;
    cout << "El resultado de la integracion es: " << sum << endl;

    return 0;
}
