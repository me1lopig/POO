// arreglo_poo.cpp : Arreglos de objetos
//
//

#include <iostream>
#include "arreglo_poo.h"

using namespace std;

int main()
{

    arreglo_poo alumnos[3]; // declaracion estatica de array de clases
    arreglo_poo* alumnos2 = new arreglo_poo[3]; // declaracion de un array dinamico de clases


    for (int i = 0; i < 3; i++)
    {
        (alumnos2+i)->pedirDatos();
        cout << endl;
    }

    cout << "Mostramos las notas " << endl;


    for (int i = 0; i < 3; i++)
    {
        (alumnos2 + i)->mostrarNotas();
        cout << endl;
    }


    cout << "Pulsa una tecla " << endl;
    cin.get();



}


