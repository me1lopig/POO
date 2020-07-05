#pragma once


#include<iostream>
#include<math.h>
#include"Figura.h"

using namespace std;


class Triangulo:public Figura // todo lo publico de la clase orogen lo asimila 

{
private:

	float lado1, lado2, lado3;

public:

	Triangulo(int nLados, float lado1, float lado2, float lado3): Figura(nLados)
	{
		// se incluyen tambien los atributos de la clase padre


		this->lado1 = lado1;
		this->lado2 = lado2;
		this->lado3 = lado3;
		

	}

	float areaTriangulo()
	{
		// area segun la formula de Heron

		float p = (lado1 + lado2 + lado3) / 2; // semiperimetro del triangulo
		float area = sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));

		return area;

	}






};

