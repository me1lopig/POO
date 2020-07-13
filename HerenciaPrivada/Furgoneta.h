#pragma once


// herencia protegida

#include<iostream>
#include "Vehiculo.h"

using namespace std;


class Furgoneta : protected Vehiculo
{
private:
	int carga;

public:
	Furgoneta(string marca, string color, string modelo, int carga) : Vehiculo(marca, color, modelo)
	{
		this->carga = carga;
	}

	~Furgoneta()
	{
		// destructor
	}


	int getCarga()
	{

		return carga;
	}


	string getColorFurgo()
	{
		string colorFurgo=getColor();
		return colorFurgo;
	}

};