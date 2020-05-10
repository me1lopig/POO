
#include <iostream>
#include "DiaAnio.h"


using namespace std;


// comprobamos la igualdad en las fechas

bool DiaAnio::igual(DiaAnio& d)
{
	if (dia == d.dia && mes == d.mes)
	{
		return true;
	}

	else
	{
		false;
	}


}


void DiaAnio::visualizar()
{

	cout << "Mostrando los datos " << endl;
	cout << "Mes: " << mes << "\nDia: " << dia << endl;


}