#pragma once


#include<iostream>
#include "Vehiculo.h"

using namespace std;



class Deportivo : private Vehiculo

{

private:
	int cilindrada;

public:

	Deportivo(string marca, string color, string modelo, int cilindrada) :Vehiculo(marca, color, modelo)
	{

		this->cilindrada = cilindrada;

	}

	~Deportivo()
	{
		// destructor
	}

	
	int getCilindrada()
	{
		return cilindrada;
	}

	string getMarcaVehiculo()
	{
		string mensaje = getMarca();
		return mensaje;
	}


	string getColorVehiculo()
	{
		string color = getColor();
		return color;
	}


};

