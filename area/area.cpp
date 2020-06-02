// area.cpp : 
// area y perimetro de un rectangulo y/o rectangulo
//

#include <iostream>
#include "geometria.h"

using namespace std;

int main()
{
    int entrada;
    float ladoA;
    float ladoB;



    cout << "Calculo del area y permitro de un cuadrilatero " << endl;
    cout << "[1] rectangulo" << endl;
    cout << "[2] cuadrado" << endl;
    cout << "otra tecla salir" << endl;
    cin >> entrada;



    switch (entrada)
    {
    case 1:
        cout << "Introduce el lado A del rectangulo ";
        cin >> ladoA;
        
        cout << "Introduce el lado B del rectangulo ";
        cin >> ladoB;

        geometria rectangulo(ladoA, ladoB);
        
        break;

    case 2:
        cout << "Introduce el lado del cuadrado ";
        cin >> ladoA;
        geometria rectangulo(ladoA);
        break;
        

    default:
        break;
    }



    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;


}


