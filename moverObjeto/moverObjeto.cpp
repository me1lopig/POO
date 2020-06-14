// moverObjeto.cpp : mover objeto en un tablero
//

#include <iostream>
#include "mover.h"

using namespace std;

int main()
{

    char tecla; // dato de entrada
    float x;
    float y;



    cout << "Introduce coordenada inicial x" << endl;
    cin >> x;

    cout << "Introduce coordenada inicial y" << endl;
    cin >> y;

    mover* coordenadas = new mover(x, y);


    cout << "Datos iniciales " << endl;
    cout << "Posicion x= " << coordenadas->salida_x() << endl;
    cout << "Posicion y= " << coordenadas->salida_y() << endl;

    coordenadas->normas();

    do
    {
        cin >> tecla;

        switch (tecla)
        {
        case '8':
            coordenadas->arriba();
            break;
        case '2':
            coordenadas->abajo();
            break;
        case '6':
            coordenadas->derecha();
            break;
        case '4':
            coordenadas->izquierda();
            break;

        default:
            break;
        }


        cout << "Posicion x= " << coordenadas->salida_x() << endl;
        cout<< "Posicion y= " << coordenadas->salida_y() << endl;

    } while ((tecla =='8')|| (tecla == '2')||(tecla == '4')||(tecla == '6'));




    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();


    return 0;


}


