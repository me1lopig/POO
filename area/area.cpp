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

    geometria* figura;

       

   
    cout << "Introduce el lado A  ";
    cin >> ladoA;
        
    cout << "Introduce el lado B  ";
    cin >> ladoB;

    if (ladoA == ladoB)
    {
        // los lados son iguales es un cuadrado
        figura = new geometria(ladoA);
        
       
    }
    else
    {
        // los lados son dintintos es un rectangulo
        figura = new geometria(ladoA,ladoB);
    }

    cout << "El area es " << figura->getArea()<< endl;
    cout << "El perimetro  es " << figura->getPerimetro() << endl;


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;


}


