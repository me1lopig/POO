// trigonometria.cpp 
// ejemplo de uso de clases para el calculo de funciones trigonometricas
//
//

#include <iostream>
#include<math.h>
#include "trigonometria.h"

using namespace std;


int main()
{
    float dato;
    int potencia;

 
    cout << "Introduce el dato " << endl;
    cin >> dato;




    trigonometria valor(dato);
    cout << "El seno de " << dato << " es " << valor.seno() << endl;
    cout << "El seno de " << dato << " es con la libreria math " << sin(dato) << endl;

    cout << "El coseno de " << dato << " es " << valor.coseno() << endl;
    cout << "El coseno de " << dato << " es con la libreria math " << cos(dato) << endl;

    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();
}


