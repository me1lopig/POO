// herenciaPublica.cpp : Ejemplo de uso de herencia publica
//
//

#include <iostream>
#include "Vehiculo.h"
#include "Turismo.h"

using namespace std;

int main()
{

    Turismo* t1 = new Turismo("Toyota", "Plomo", "Plomo", 4);

    t1->setColor("Negro"); // cambiamos el color 



    cout << "Datos del vehiculo" << endl;
    cout<< "El color es :"<<t1->getColor()<<endl;
    cout << "La marca  es :" << t1->getMarca ()<< endl;
    cout << "El numeroo de puertas es :" << t1->getNumeroPuertas() << endl;
    
    cout << "El modelo es :" << t1->retornaModelo() << endl;



    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}

