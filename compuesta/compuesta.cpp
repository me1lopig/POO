// compuesta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "expediente.h"
#include "direccion.h"
#include "estudiante.h"

using namespace std;



int main()
{
    
    estudiante* estudiante1 = new estudiante("3FGF",6.25,7.15,"Calle del gato clavo");

    estudiante1->mostrarDatos();





    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;

}


