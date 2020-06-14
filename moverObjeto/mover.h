#pragma once
#include<iostream>

using namespace std;

class mover
{
private:
	
	float x;
	float y;



public:

	mover(float x,float y)
	{
		// inicializacion de las coordenadas iniciales
		this->x = x;
		this->y = y;
	}


	void normas()
	{
		// imprimir normas al principio del programa

		cout << "Normas de entrada de datos" << endl;
		cout << "Pulsa 8 para incremento de y" << endl;
		cout << "Pulsa 2 para decremento de y" << endl;
		cout << "Pulsa 6 para incremento de x" << endl;
		cout << "Pulsa 4 para decremento de x" << endl;
		cout << "Pulsa otra tecla para parar" << endl;
	}



	void derecha()
	{
		x++;
	}

	void izquierda()
	{
		x--;
	}

	void arriba()
	{
		y++;
	}


	void abajo()
	{
		 y--;
	}

	float salida_x()
	{
		return x;
	}


	float salida_y()
	{
		return y;
	}

};

