// herencia_1.cpp : Ejemplo de herencia entre clases
// ejemplo de herencia de clases
//

#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"

using namespace std;

int main()
{
    
    Triangulo* t1 = new Triangulo(3, 5, 6, 7);
    Cuadrado* t2 = new Cuadrado(2, 5, 6);




    cout << "Para el caso del triangulo " << endl;
    cout<<"Numero de lados del triengulo es "<<t1->getNLados()<<endl;
    cout << "El area es " << t1->areaTriangulo() << endl;


    cout << "Para el caso del Cuadrado " << endl;
    cout << "Numero de lados del Cuadrado es " << t2->getNLados() << endl;
    cout << "El area es " << t2->areaCuadrado() << endl;


    cout << "Pulsa una tecla paa terminar " << endl;
    cin.get();


    return 0;
}


