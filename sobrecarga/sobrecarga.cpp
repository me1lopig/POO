// sobrecarga.cpp : Ejemplo de sobrecarga de clases
//
//




// librerias standard y creadas
#include <iostream>
#include "Sobrecarga.h"

using namespace std;


int main()
{


    cout << " ejemplo de sobrecarga de funciones" << endl;

    Sobrecarga* persona1 = new Sobrecarga("Antonio",25);
    Sobrecarga* persona2 = new Sobrecarga("12536225Y");

    // sobrecarga
    persona1->correr();
    persona2->correr(30);
    cout << endl;


    // salida del programa
    cout << "Pulsa una teccla para salir" << endl;
    cin.get();
    return 0;
}

