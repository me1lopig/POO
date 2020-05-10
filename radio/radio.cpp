// radio.cpp
// ejemplo de uso de clases
//

#include <iostream>
#include "radio.h"

using namespace std;

int main()
{

    //definicion de las clases

	radio miradio(50, 10);
	radio miradio2;
	radio* miradio3 = new radio(20,20); // constructor de forma dinamica
	

	cout << "Primera Radio" << endl;
	miradio.subir_volumen();
	miradio.subir_frecuencia();
	miradio.mostrar_volumen();
	miradio.mostrar_frecuencia();

	cout << "Segunda radio" << endl;
	miradio2.bajar_volumen();
	miradio2.bajar_frecuencia();
	miradio2.mostrar_volumen();
	miradio2.mostrar_frecuencia();

	cout << "Tercera radio, esta vez dinamica" << endl;
	miradio3->bajar_volumen();
	miradio3->bajar_frecuencia();
	miradio3->mostrar_volumen();
	miradio3->mostrar_frecuencia();


    cout << "Pulsa una tecla";
    cin.get();

    return 0;
}


