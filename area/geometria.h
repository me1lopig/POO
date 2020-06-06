#pragma once
#include<iostream>

using namespace std;


class geometria
{
	// calculo del perimetro y el area de cuadrilateros

	// atributos

private:
	float ladoA;
	float ladoB;

//metodos

public:



	geometria(float ladoA, float ladoB)
	{
		// comstructor del rectangulo
		// rectangulo
		this->ladoA = ladoA;
		this->ladoB = ladoB;

	}

	geometria(float lado)
	{
		// constructor del cuadrado
		// cuadrado
		this->ladoA = ladoA= this->ladoB = ladoB=lado;

	}


	float getArea()

	{
		// caso del area

		return ladoA * ladoB;
		
	}


	float getPerimetro()

	{
		// caso del perimetro

		return ladoA *2+ ladoB*2;

	}





};

