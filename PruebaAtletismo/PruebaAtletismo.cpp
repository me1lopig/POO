// PruebaAtletismo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termia ahí.
//El programa debe gestionar una serie de atletas en atletas caracterizados por su número de atleta el 
// nombre y el tiempo que le ha tomado terminar la carrera y el final.
//
//Indicar que atleta ha ganano la carrera
//
//
//

#include <iostream>
#include "Atleta.h"

using namespace std;

int main()
{

    Atleta* atletas; // declaramos la clase
    int numeroAtletas;
    int indiceAtleta; // denominacion del nuemro del atleta que ha ganado la carrera


    // Variable de argumento
    int numeroAtleta;
    string nombreAtleta;
    float tiempoAtleta;


    // entrada del nuemro de Atletas
    cout << "Digita el numero de atletas a competir ";
    cin >> numeroAtletas;
    

    atletas = new Atleta[numeroAtletas]; // declaracion de un array dinamico de atletas

    // solicitud de los datos
    for(int i = 0; i < numeroAtletas;i++)
    {

        cout << "Introduce los datos del Atleta " << i + 1 << endl;

        cout << "Introduccion del numero del Atleta ";
        cin >> numeroAtleta;
        cin.ignore();

        cout << "Nombre del atleta ";
        getline(cin,nombreAtleta);

        cout << "Introduccion del tiempo del Atleta ";
        cin >> tiempoAtleta;

        cout << endl;

        atletas[i]=Atleta(numeroAtleta, nombreAtleta, tiempoAtleta); // llamado al la clase con los datos de los atletas

       }

    indiceAtleta = atletas->indiceGanador(atletas, numeroAtletas);

    cout << "El atleta ganador es " << indiceAtleta << endl;
    cout << "Los datos del atleta ganadro son " << endl;
    (atletas + indiceAtleta)->mostrarDatos();



    cout << "Pulsa una tecla para ternimar el programa ";
    cin.get();

    return 0;

}


