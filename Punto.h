
// ejemplo de clase

class Punto
{
	// atributos
	private:
		int x, y;

	// metodo constructor, pueden existir varios y son publicos
	
public:	
	Punto(int _x, int _y)
	{
		// metodo constructor 1
		// pasamos valores a los datos encapsulados
		x = _x;
		y = _y;


	}

	Punto()
	{
		// otro ejemplo de constructor
		x = y = 0;
	}


	// metodos
	// establecemos estas funciones en otro archivo

	void setX(int valorX); // establecemos en valor de x

	void setY(int valorY); //  establecemos en valor de y

	int getX(); // funcion para obtener el valor de X

	int getY(); // funcion para obtener el valor de y


};

