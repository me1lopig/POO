// ejemplo_static.cpp 
// ejemplo de elementos static de una clase
// atributos estaticos 
// metodos estaticos

//

#include <iostream>
#include "estatico.h"

int main()
{
    
    
    estatico* obj1 = new estatico();
    estatico* obj2 = new estatico();
    estatico* obj3= new estatico();

    cout << obj1->getContador() << endl; // da igual la instancia que usemos da el mismo resultado

    cout<<"Ejemplo de suma en metodo estatico "<<estatico::suma(4, 4)<<endl;



    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;


}


