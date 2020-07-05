#pragma once

#include<string>

using namespace std;


class Atleta
{

private:
	int numeroAtleta;
	string nombreAtleta;
	float tiempoAtleta;


public:

	// cosntructores
	Atleta()
	{
		// constructor por defecto
	}


	Atleta(int numeroAtleta, string nombreAtleta, float tiempoAtleta)
	{

		this-> numeroAtleta=numeroAtleta;
		this->nombreAtleta = nombreAtleta;
		this->tiempoAtleta = tiempoAtleta;

	}

	// destructor

	~Atleta()
	{
		// destructor
	}



	// metodos

	float getTiempoCarrera()
	{
		// obtenemos el tiempo de carreta 

		return tiempoAtleta;
	}


	void mostrarDatos()
	{
		// mstramos los datos de un altleta determinado

		cout << "Datos del atleta " << numeroAtleta << endl;
		cout << "Nombre del Atleta " << nombreAtleta << endl;
		cout << "Tiempo del Atleta " << tiempoAtleta << endl;
			
	}



	static int indiceGanador(Atleta atletas[],int n)
	{
		// retorna el indice ganador
		int indice = 0;
		float tiempo = atletas[0].getTiempoCarrera();

		for (int i = 0; i < n; i++)
		{
			if (tiempo>atletas[i+1].getTiempoCarrera())
			{
				tiempo = atletas[i + 1].getTiempoCarrera();
				indice = i;
			}


		}

		return indice;

	}


};

