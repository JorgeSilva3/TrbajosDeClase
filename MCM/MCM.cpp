#include <iostream>
using namespace std;

int main() {
    //Variables
    int n;
    int num, mcm = 1;
    //Ingresar cantidad de elementos
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    //Ingresar los elementos
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese un n�mero: ";
        cin >> num;
    //C�lculo
        int gcd = 1;
        for (int j = 2; j <= num; ++j) {
            if (num % j == 0) {
                int k = num / j;
                if (j > k) {
                    break;
                }
                if (mcm % j == 0 && mcm % k == 0) {
                    gcd = j * k;
                    break;
                }
            }
        }
        mcm = mcm * num / gcd;
    }
    //Resutado
    cout << "El minimo com�n m�ltiplo de los n�meros es: " << mcm << endl;

    return 0;
}


