#pragma once

#include <iostream>


using namespace std;

class Barco
{

private:

	string nombre;

public:

	Barco(string nombre)
	{
		this->nombre = nombre;
	}

	~Barco()
	{
		// destructor de la clase barco
	}



	void indicarBarco()
	{
		cout << "El desplazamiento del barco es por agua " << endl;
	}
	
	string getNombreBarco()
	{
		return nombre;
	}


};

