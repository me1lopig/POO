// POO.cpp : Primer ejemplo de programacion orientada a objetos
// ejemplo inicial de declaarcion  clases y objetos
// creacion de objetos


#include <iostream>
#include "Punto.h" // llamado a la clase que hemos creado y vamos a usar

using namespace std;


int main()
{

    // instanciacion de una clase de forma estatica
    
    Punto p1(2, 1); // asignacion de valores



    // imprimimos los valores de x , y que hemos pasado antes
    cout<<"El valor de x es "<<p1.getX()<<endl;
    cout<<"El valor de y es " << p1.getY() << endl;


    // creacion de un objeto de forma dinamica


    Punto* p2 = new Punto(); // constructor de forma dinamica, usamos el segundo constructor x=y=0
    
    // modifiamos los valores por defecto
    p2->setX(5);
    p2->setY(10);
   
    // imprimimos los valores modificados
    cout << "El valor de x es " << p2->getX() << endl;
    cout << "El valor de y es " << p2->getY() << endl;


    // finalizacnion del programa 
    cout << "Pulsa una tecla para terminar";
    cin.get();


    return 0;

}


