#pragma once

#include<iostream>

using namespace std;


class estatico
{
	// atributos

private:
	static int contador; // atributo estatico de la clase



// metodos

public:
	estatico()
	{
		// costructor por defecto
		contador++; // incrementams el contador cada vez que se inicia un objeto de la clase
	}



	int getContador()
	{
		return contador;
	}

	~estatico()
	{
		// destructor
	}


	static int suma(int n1, int n2)
	{
		// metodo estatico
		return (n1 + n2);

	}

};

int estatico::contador = 0; //inicialmos el contador estatico fuera de la definicion de clase
