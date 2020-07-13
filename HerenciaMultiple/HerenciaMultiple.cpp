// HerenciaMultiple.cpp : Ejemplo de herencia multiple
//

#include <iostream>
#include "Hidroavion.h"


using namespace std;

int main()
{
 
    Hidroavion* obj1 = new Hidroavion("Cesna", "AVG-12", "CC-12"); // Declaraccion del objeto


    obj1->indicarAvion();
    obj1->indicarBarco();
    cout << endl;

    cout << "Datos del Aeroplano con llamadas" << endl;
    cout << "Nombre " << obj1->getNombreBarco() << endl;
    cout << "Modelo " << obj1->getModelo() << endl;
    cout << "Codigo " << obj1->getCodigo() << endl<<endl; 



    cout << "Mostramos todos los datos a la vez" << endl;
    obj1->mostrarDatos();


    delete obj1; // eliminacion del objeto


    cout << "Pulsa una tecla " << endl;
    cin.get();

    return 0;
}
