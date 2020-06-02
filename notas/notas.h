#pragma once


#include <iostream>
#include "notas.h"

using namespace std;


class notas
{

	// atributos
private:
	float nota_mat;
	float nota_prog;
	float promedio;

	// metodos
public:

	// constructor por defecto
	notas()
	{

	}

	void introduce_notas()
	{
		cout<<"Digita la nota de matematicas " << endl;
		cin >> nota_mat;

		cout<<"Digita la nota de programacion " << endl;
		cin >> nota_prog;

	}


	void salida_notas()
	{
		cout << "El reultado de las notas es " << endl;
		cout << "La nota de matematicas es  " << nota_mat << endl;
		cout << "La nota de programacion es " << nota_prog << endl;
		cout << "La nota media es " << (nota_mat + nota_prog) / 2 << endl;


	}


};

