#pragma once
#include<iostream>

using namespace std;




class vehiculo
{
private:

	string marca;
	string modelo;
	float precio;


public:


	vehiculo(string marca, string modelo, float precio)
	{
		// constructor para introducir los valores 
		this->marca = marca;
		this->modelo = modelo;
		this->precio = precio;
	}

	vehiculo()
	{
		// constructor por defecto

	}


	float getPrecio()
	{
		return precio;
	}

	void mostrarDatos()
	{
		// mostramos los datos acumulados
		cout << "Marca " << marca << endl;
		cout << "Modelo " << modelo << endl;
		cout << "Precio " << precio << endl;
	}



	static int indiceMAsBarato(vehiculo coches [], int n)
	{
		// nos da el indice del coche mas barato

		int indice = 0;
		float precio;

		precio = coches[0].getPrecio();

		for (int i = 1; i < n; i++)
		{
			if (coches[i].getPrecio() < precio)
			{
				precio = coches[i].getPrecio(); // cambiamos el valor
				indice = i; // almacenamos el indice
			}


		}

		return indice;



	}


	~vehiculo()
	{
		// destructor
	}

};

