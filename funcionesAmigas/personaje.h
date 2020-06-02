#pragma once
#include<iostream>

using namespace std;



class personaje
{
	friend void modificar(personaje &, int, int); // declaracion de funciones friend

	// atributos
private:
	int ataque;
	int defensa;


	//metodos
public:

	personaje(int ataque,int defensa)
	{
		// contructor
		this->ataque = ataque;
		this->defensa = defensa;
	}



	void mostrarDatos()
	{
		cout << "Ataque " << ataque << endl;
		cout << "Defensa " << defensa << endl;
	}




};

