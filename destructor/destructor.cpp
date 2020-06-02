// destructor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//



#include <iostream>
#include "destructor.h"

using namespace std;


int main()
{
   // tratamiento de forma estatica

    cout << "Tratamiento estatico " << endl;

    destructor perro("Pinky", "Foxterrier");

    perro.mostrarDatos();

    perro.~destructor(); // aplicamos el destructor

    // tratamiento de forma dinamica

    cout << "Tratamiento dinamico " << endl;

    destructor* perro_2 = new destructor("Bigotes","Ratero");

    perro_2->mostrarDatos();

    delete perro_2; // aplicamos el destructor


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();


}
