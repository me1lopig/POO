#pragma once
#include <iostream>
#include"expediente.h"
#include"direccion.h"


using namespace std;

class estudiante
{
// atributos

private:
	
	string codigo;
	float promedio;
	// declaracion de objetos de clase
	expediente exp; // objeto de clase expediente
	direccion dir; // objeto de clase direccion


// atributos
public:
	
	estudiante(string codigo, float promedio,int nroExpediente,string direccion):exp(nroExpediente),dir(direccion)
	{

		this->codigo = codigo;
		this->promedio = promedio;


	}


	void mostrarDatos()
	{
		cout << "Datos " << endl;
		cout << "El codigo es " << codigo << endl;
		cout << "El valor del promedio es " << promedio << endl;
		cout << "El numero de expediente es " << exp.getnroexpediente() << endl;
		cout << "La direccion es " << dir.getdireccion() << endl;

	}


};

