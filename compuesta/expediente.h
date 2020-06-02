#pragma once
#include <iostream>
#include"direccion.h"


using namespace std;


class expediente
{


// atributos 
private:
	int nroExpediente;



// metodos
public:

	expediente(int nroExpediente)
	{
		// constructor

		this->nroExpediente = nroExpediente;
	}

	expediente()
	{
		// constructor por defecto
	}


	~expediente()
	{
		// destructor
	}

	int getnroexpediente()
	{
		// metodo get
		return nroExpediente;
	}

};

