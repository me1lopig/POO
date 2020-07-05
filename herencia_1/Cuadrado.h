#pragma once

#include<iostream>
#include"Figura.h"

using namespace std;




class Cuadrado:public Figura
{

		
	private:

		float lado1, lado2;

	public:

		Cuadrado(int nLados, float lado1, float lado2) : Figura(nLados)
		{
			// se incluyen tambien los atributos de la clase padre


			this->lado1 = lado1;
			this->lado2 = lado2;
			


		}

		float areaCuadrado()
		{
			// area segun la formula de Heron

			float area = lado1*lado2;

			return area;

		}



};

