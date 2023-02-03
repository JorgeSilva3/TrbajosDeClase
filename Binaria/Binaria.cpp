#include <iostream>
#include <algorithm>
using namespace std;
int
main()
{


    srand(time(NULL));//Inicio de generar random
    int n;
    cout << "\nIngresa el número de elementos del vector:";

    cin >> n;

    int arreglo_aleatorio[n];//Creo un arreglo de n enteros

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (i + 1); j++) {
            arreglo_aleatorio[i] = 1 + rand() % (n);//agregar random a la posición "i" de mi arreglo
            while (arreglo_aleatorio[i] == arreglo_aleatorio[j] && i != j) { //Mientras el arreglo sea igual al de j, y "i" y "j" sean diferentes para saber que no es la misma posición del arreglo (porque obviamente sería el mismo número)
                arreglo_aleatorio[i] = 1 + rand() % (n);//Que genere un random hasta que sean diferentes
            }
        }
    }


    //Ordenar el vector
    sort(arreglo_aleatorio, arreglo_aleatorio + n);
    cout << "Datos ordenados: ";
    for (int i = 0; i != n; ++i)
        cout << arreglo_aleatorio[i] << " ";




    //Búsqueda
    int  valor, con, inf, sup, mitad, tam;

    bool encontrado = false;

    tam = sizeof(arreglo_aleatorio) / sizeof(*arreglo_aleatorio);

regresa:
    con = 0;

    inf = 0;

    sup = tam;


    cout << "\nIngresa un valor a ubicar:";

    cin >> valor;

    while ((inf <= sup) && con < tam)

    {

        mitad = (inf + sup) / 2;

        if (arreglo_aleatorio[mitad] == valor)
        {

            encontrado = true;

            break;

        }

        if (arreglo_aleatorio[mitad] > valor)
        {

            sup = mitad;

            mitad = (inf + sup) / 2;

        }

        if (arreglo_aleatorio[mitad] < valor)
        {

            inf = mitad;

            mitad = (inf + sup) / 2;

        }

        con++;

    }

    if (encontrado == false)
    {

        cout << "En valor no fue encontrado\n ";

        goto regresa;

    }

    if (encontrado == true)
    {


        cout << "El valor fue encontrado en la posicion: " <<
            mitad + 1 << ".\n ";

    }



    return 0;

}
