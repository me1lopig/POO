// ClaseAbstracta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerbivoro.h"

using namespace std;

int main()
{
    
    Planta* planta1 = new Planta();
    AnimalCarnivoro* animal1 = new AnimalCarnivoro();
    AnimalHerbivoro* animal2 = new AnimalHerbivoro();


    planta1->alimentarse();
    animal1->alimentarse();
    animal2->alimentarse();


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}


