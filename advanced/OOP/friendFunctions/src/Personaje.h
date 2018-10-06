class Personaje
{
	// reference to friend function
	friend void modifying(Personaje&, int, int);
	
	private:
		int attack;
		int defense;

	public:
		Personaje(int attack, int defense)
		{
			this->attack = attack;
			this->defense = defense;
		}

		void mostrarDatos();
};