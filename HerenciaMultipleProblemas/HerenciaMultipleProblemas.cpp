// HerenciaMultipleProblemas.cpp : Ejemplo de herencia multiple problemas 
//

#include <iostream>
#include "ClaseDerivada.h"


using namespace std;


int main()
{
    
    ClaseDerivada* obj1 = new ClaseDerivada(5, 10, 15); // declaracion del objeto


    // los tres metodos para sacar x se llaman igual, hay que indicar la clase a la que pertenecen

    cout << "x= " << obj1->ClaseBase1::get_x() << endl;
    cout << "x= " << obj1->ClaseBase2::get_x() << endl;
    cout << "x= " << obj1->get_x ()<< endl;



    delete obj1;


    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    
    return 0;
}


