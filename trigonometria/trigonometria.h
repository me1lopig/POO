// libreria de funciones trigonometricas
// a mas terminos mas precision

#pragma once



class trigonometria
{

private:
	float x;



public:

	trigonometria(float x) 
	{
		// cnstructor de la clase
		this->x = x;

	}


	float seno()
	{
		return x - elev(3) / (3 * 2) + elev(5) / (5 * 4 * 3 * 2) - elev(7) / (7 * 6 * 5 * 4 * 3 * 2);
	}

	float coseno()
	{
		return 1 - elev(2) / 2 + elev(4) / ( 4 * 3 * 2) - elev(6) / (6 * 5 * 4 * 3 * 2);
	}

	float tangente()
	{
		return x + elev(3) / (3) + 2 * elev(5) / (15) + 17 * elev(7) / (315);
	}

	float elev(int n)
	{
		float valor = 1;
		// funcion potencia
		for (int i = 1; i <= n; i++)
		{
			valor *= x;
		}

		return valor;

	}
	






	
};

