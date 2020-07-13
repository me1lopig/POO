// HerenciaPrivada.cpp : Ejemplo de herencia privada
// 
//


#include <iostream>
#include "Vehiculo.h"
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"


using namespace std;

int main()
{

    Turismo* t1 = new Turismo("Toyota", "Plomo", "Plomo", 4);

    t1->setColor("Negro"); // cambiamos el color 



    cout << "Datos del vehiculo" << endl;
    cout << "El color es :" << t1->getColor() << endl;
    cout << "La marca  es :" << t1->getMarca() << endl;
    cout << "El numeroo de puertas es :" << t1->getNumeroPuertas() << endl;

    cout << "El modelo es :" << t1->retornaModelo() << endl;

   



    cout << "Herencia privada " << endl;

    Deportivo* d1 = new Deportivo("Audi","Blanco","KP98",10);
   


    cout << "La cilindrada es " << d1->getCilindrada() << endl;
    cout << "La marca es " << d1->getMarcaVehiculo() << endl;
    cout << "La color es " << d1->getColorVehiculo() << endl;
   

    cout << "Herencia protegida " << endl;

    Furgoneta* f1 = new Furgoneta("Kia", "Verde", "AS12", 1200);

    cout << "La carga de la furgoneta es  " << f1->getCarga() << endl;
    cout << "La color de la furgoneta es  " << f1->getColorFurgo() << endl;


    // borramos las clases
  delete t1;
  delete d1;
  delete f1;


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}

