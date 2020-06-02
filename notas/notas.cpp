// notas.cpp : Uso de arrays de objetos

//

#include <iostream>
#include "notas.h"

using namespace std;


int main()
{

    notas alumno[3]; // declaracion estatica

    for (int i = 0; i < 3; i++)
    {
        cout << "Alumno " << i + 1 << endl;
        alumno[i].introduce_notas();
        cout << "Salida de los resultados" << endl;
        alumno[i].salida_notas();
        cout << endl;

    }


    cout << "Para el caso de asignacion dinamica de instancias " << endl;

    notas* alumno2 = new notas[3]; // declaracion dinamica


    for (int i = 0; i < 3; i++)
    {
        cout << "Alumno " << i + 1 << endl;
        (alumno2+i)->introduce_notas();
        cout << "Salida de los resultados" << endl;
        (alumno2 + i)->salida_notas();
        cout << endl;

    }

       

    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();


}

