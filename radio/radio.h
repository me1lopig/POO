#pragma once

// clase de radios
#include<iostream>

using namespace std;

class radio
{

	// atributos 
	private:
		int frecuencia;
		int volumen;

	// metodos
	public:



		radio(void)
		{
			frecuencia = 100;
			volumen = 7;

		}

		radio(int _fr, int _vol)
		{
			frecuencia = _fr;
			volumen = _vol;

		}


		void subir_volumen()
		{
			volumen++;
		}

		void bajar_volumen()
		{
			volumen--;
		}


		void subir_frecuencia()
		{
			frecuencia++;
		}

		void bajar_frecuencia()
		{
			frecuencia--;
		}


		void mostrar_volumen()
		{
			cout << "El valor del volumen es " << volumen <<endl;
		}


		void mostrar_frecuencia()
		{
			cout << "El valor de la frecuancia es " << frecuencia <<endl;
		}



};

