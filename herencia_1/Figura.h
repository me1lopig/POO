#pragma once

#include<iostream>

using namespace std;



class Figura
{

private:
	int nLados;


public:

	Figura(int nLados)
	{
		// constructor
		this->nLados = nLados;

	}

	~Figura()
	{
		// destructor
	}



	int getNLados()
	{
		return nLados;
	}



};

