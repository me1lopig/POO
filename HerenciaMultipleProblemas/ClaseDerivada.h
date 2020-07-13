#pragma once

#include <iostream>
#include"ClaseBase1.h"
#include"ClaseBase2.h"


using namespace std;


class ClaseDerivada:public ClaseBase1,public ClaseBase2 // indicacion de la herencia multiple
{

private:

	int x;

public:

	ClaseDerivada(int x1,int x2, int x): ClaseBase1(x1),ClaseBase2(x2)
	{
		this->x = x;


	}

	~ClaseDerivada()
	{
		// destructor
	}

	int get_x()
	{
		return x;

	}




};

