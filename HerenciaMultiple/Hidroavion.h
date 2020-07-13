#pragma once

#include <iostream>
#include"Avion.h"
#include"Barco.h"

using namespace std;


class Hidroavion:public Barco,public Avion
{
private:

	string codigo;

public:

	Hidroavion(string nombre,string modelo,string codigo):Barco(nombre),Avion(modelo)
	{
		this->codigo = codigo;

	}

	~Hidroavion()
	{
		// destructor
	}


	string  getCodigo()
	{
		return codigo;
	}



	void mostrarDatos()
	{
		// sacamos todos los datos del Hidroavion

		cout << "Datos del Aeroplano" << endl;
		cout << "Nombre " << getNombreBarco()<<endl;
		cout << "Modelo " << getModelo()<< endl;
		cout << "Codigo " <<codigo<< endl; // este dato si es de la clase

	}




};

