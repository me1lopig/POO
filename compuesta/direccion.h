#pragma once
#include<iostream>

using namespace std;



class direccion
{

private:
	string direc;


public:



	direccion()
	{
		// constructor por defecto
	}

	direccion(string direc)
	{
		// otro constructor
		this->direc = direc;

	}

	~direccion()
	{
		// destructor 
	}



	string getdireccion()
	{
		// metodo getter para sacar el dato del resultado
		return direc;
	}

};

