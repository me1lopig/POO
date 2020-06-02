#pragma once


class geometria
{
	// calculo del perimetro y el area de cuadrilateros

	// atributos

private:
	float ladoA;
	float ladoB;

//metodos

public:

	geometria(float ladoA, float ladoB)
	{
		// rectangulo
		this->ladoA = ladoA;
		this->ladoB = ladoB;

	}

	geometria(float ladoA)
	{
		// cuadrado
		this->ladoA = ladoA;

	}


	float getRectangulo()

	{
		// caso del rectangulo

		return ladoA * ladoB;
	}

	float getCuadrado()

	{
		// lado del cuadrado
		return ladoA * ladoA;
			
	}



};

