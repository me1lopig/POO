#pragma once

// objeto para modelizar a un perro
#include <iostream>

using namespace std;



class destructor
{

	// atributos
private:

	string nombre;
	string raza;


// metodos
public:

	

	destructor(string nombre, string raza) // constructor
	{
		this->nombre=nombre;
		this->raza=raza;

	}

	~destructor()
	{
		// destructor para liberar memoria
	}
	

	void mostrarDatos()
	{
		cout << "Los datos del perro son " << endl;
		cout << "El nombre del perro es " << nombre << endl;
		cout << "La raza del perro es " << raza << endl;
	}

};

