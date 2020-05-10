// metodos de la clase Punto.h

#include "Punto.h" // llamado a la clase que hemos creado


// Metdos de la clase referenciados a la clase
// hay que indicar la clase a la que pertenecen

void Punto::setX(int valorX)
{	
	
	// establecemos en valor de x

	x = valorX;
}

void Punto::setY(int valorY)
{

	//  establecemos en valor de y
	y = valorY;

}
int Punto::getX()
{
	// funcion para obtener el valor de X
	return x; 
}
int Punto::getY()
{

	// funcion para obtener el valor de y
	return y;
}


