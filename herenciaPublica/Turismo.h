#pragma once

#include<iostream>
#include"Vehiculo.h"

using namespace std;



class Turismo: public Vehiculo
{
	// hereda todo lo publico y lo protegido de la clase base no lo privado

private:
	int numeroPuertas;

public:

	Turismo(string marca, string color, string modelo, int numeroPuertas) : Vehiculo( marca, color, modelo )
	{
		// constructor de la clase heredera
		this->numeroPuertas = numeroPuertas;

	}

	~Turismo()
	{
		// destructor
	}

	int getNumeroPuertas()
	{
		return numeroPuertas;
	}


	string retornaModelo()
	{
		// llamado a un metodo protegido de la clase padre
		string mensaje = getModelo(); // de ejecuta un metodo privado desde la clase heredada
		return mensaje;
	}


};

