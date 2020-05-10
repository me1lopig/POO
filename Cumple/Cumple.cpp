// Cumple.cpp : Se reproduce aqui el primer ejercicio pero usando clases
//revisat el codigo no funciona como deberia
//

#include <iostream>
#include "DiaAnio.h"

using namespace std;

int main()
{


    DiaAnio* hoy;
    DiaAnio* cumple;
    int d, m;

    cout << "Introduce la fecha de hoy, dia ";
    cin >> d;


    cout << "Introduce el numero de mes de hoy ";
    cin >> m;


    hoy = new DiaAnio(d, m);

    cout << "\nIntroduce la fecha del cumpleaños ";
    cin >> d;


    cout << "\nIntroduce el numero de mes ";
    cin >> m;

    cumple = new DiaAnio(d, m);

    // mostramos las fechas
    hoy->visualizar();
    cout << endl;

    cumple->visualizar();


    if (hoy->igual(*cumple))
    {
        cout << "Feliz cumpleaños" << endl;

    }

    else
    {
        cout << "Que tenga un  buen dia " << endl;

    }



    // teminamos el programa


    cout << "Pulsar una tecla para terminar";
    cin.get();

    return 0;
}


