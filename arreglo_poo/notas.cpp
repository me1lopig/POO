// arreglo_poo.cpp : Arreglos de objetos
//
//

#include <iostream>
#include "alumnos.h"


using namespace std;

int main()
{

    alumnos alumnos_1; // declaracion estatica de array de clases




    alumnos_1.pedirDatos();
    cout << "Mostramos los resultados " << endl;
    alumnos_1.mostrarNotas();


    cout << "Pulsa una tecla " << endl;
    cin.get();



}


