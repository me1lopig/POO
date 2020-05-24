#pragma once

// archivo de clases

// librerias standard y creadas
#include <iostream>

using namespace std;


class Sobrecarga
{

	// atributos de la clase
private:

	string nombre;
	int edad;
	string dni;

	// metodos
public:

	Sobrecarga(string _nombre,int _edad) // metodo constructor con nombre y edad 
	{
		nombre = _nombre;
		edad = _edad;
	}

	Sobrecarga(string _dni) // metodo constructor pero con el dni
	{
		dni = _dni;
	}



	void correr()
	{
		// salida de datos
		cout << "Soy " << nombre << " tengo " << edad << endl;

	}

	void correr(int km)
	{
		// salida de datos
		cout << "He recorrido "<<km<<" km"<<endl;

	}



};



