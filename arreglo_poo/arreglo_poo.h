#pragma once

#include <iostream>

using namespace std;


class arreglo_poo
{

	// atributos
private:
	float calMate;
	float calProgra;
	float promedio;

public:
	// metodos
	arreglo_poo(); // constructor por defecto
	

	
	void pedirDatos()
	{
		cout << "Digite la nota de Matematicas " << endl;
		cin >> calMate;


		cout << "Digite la nota de Programacion " << endl;
		cin >> calProgra;

	}
	
	void mostrarNotas()
	{
		cout << "La nota de Matematicas es" << calMate << endl;
		cout << "La nota de Programacion es " << calProgra << endl;
		cout << "El promedio de las notas es " << (calMate + calProgra) /2 << endl;

	}


};

