#pragma once

#include <iostream>
#include "../Persona/Persona.h"

namespace Soccer
{
	class Entrenador : public Persona
	{
		private:
			std::string estrategia;

		public:
			Entrenador(std::string nombre, std::string apellido,
						int edad, std::string estrategia)
						: Persona(nombre, apellido, edad)
			{
				this->estrategia = estrategia;
			}

			~Entrenador() { }  //Destructor

			// metodo propio de esta clase
			void planificarEntrenamiento();
			// desarrollo de los metodos virtuales de Persona
			void partido();
			void entrenamiento();
	};
}