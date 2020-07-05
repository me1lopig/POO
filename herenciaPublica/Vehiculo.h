#pragma once

#include<iostream>

using namespace std;


class Vehiculo
{

private:
	string marca;
	string color;




protected:
	string modelo;

	string getModelo()
	{
		return modelo;
	}




public:
	Vehiculo(string marca, string color, string modelo)
	{
		this->marca = marca;
		this->color = color;
		this->modelo = modelo;

	}

	string getMarca()
	{
		return marca;
	}

	string getColor()
	{
		return color;
	}

	void setColor(string color)
	{
		// funcion para cambiar el color
		// stablecemos el color
		this->color = color;


	}




};

