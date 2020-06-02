// funcionesAmigas.cpp :
// ejemplo de funciones amigas
//
//



#include <iostream>
#include "personaje.h"

using namespace std;

void modificar(personaje& p, int at, int def)
{
    p.ataque = at;
    p.defensa = def;
}

int main()
{
   
    personaje* persona = new personaje(100,90);
    persona->mostrarDatos();


    modificar(*persona, 50, 60);
    persona->mostrarDatos();

    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();
    return 0;

}


