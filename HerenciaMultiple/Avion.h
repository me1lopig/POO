#pragma once


#include <iostream>
using namespace std;


class Avion
{
private :

	string modelo;

public:

	Avion(string modelo)
	{
		this->modelo = modelo;

	}


	~Avion()
	{
		// destructor
	}


	void indicarAvion()
	{
		cout << "El desplazamiento del avion es por aire " << endl;
	}

	string getModelo()
	{
		return modelo;
	}





};

