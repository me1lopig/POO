// vehiculos.cpp : 
// seleccinar el vehiculos mas barato
//


// librerias
#include <iostream>
#include "vehiculo.h"
#include<string>

using namespace std;

int main()
{

    // clases
    vehiculo* coches;

    // variables
    int numeroVehiculos,indiceBarato;
    string marca, modelo;
    float precio;


    cout << "Digite el numero de vehiculos " << endl;
    cin >> numeroVehiculos;


    coches = new vehiculo[numeroVehiculos];


    for (int i = 0; i < numeroVehiculos; i++)
    {

        cout << "Digite los datos del vehiculo " << i + 1 << endl;

        cin.ignore();
        cout << "Digite la marca ";
        getline(cin, marca);


        //cin.ignore();
        cout << "Digite el modelo ";
        getline(cin, modelo);
        

        cout << "Digite el precio  " ;
        cin >> precio;

        coches[i] = vehiculo(marca,modelo, precio);

    }


    indiceBarato = vehiculo::indiceMAsBarato( coches, numeroVehiculos); // llamada al metodo estatico


    cout << "El vehiculo mas barato es " << endl;
    coches[indiceBarato].mostrarDatos(); // tambien se puede (coches+indiceBarato)->mostrarDatos();

    delete[] coches; // aplicamos el destuctor


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}


