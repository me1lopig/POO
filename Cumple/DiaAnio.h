// implementacion clase



class DiaAnio
{
	// Atributos

	private:
		int dia;
		int mes;

	// metodos

	public:

		// constructores

		DiaAnio(int _dia,int _mes)
		{
			// metodo constructor
			dia = _dia;
			mes = _mes;
		}

		// metodos exteriores

		bool igual(DiaAnio& d);
		void visualizar();


};

