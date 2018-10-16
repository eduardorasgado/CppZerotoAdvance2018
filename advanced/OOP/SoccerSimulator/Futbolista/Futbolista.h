#pragma once

#include <iostream>
#include "../Persona/Persona.h"

namespace Soccer
{
	class Futbolista : public Persona
	{
		private:
			int dorsal;
			std::string posicion;

		public:
			Futbolista(std::string nombre, std::string apellido,
					int edad, int dorsal, std::string posicion)
					: Persona(nombre, apellido, edad)
			{
				this->dorsal = dorsal;
				this->posicion = posicion;
			}

			~Futbolista(){ } // Destructor

			// metodo exclusivo de esta clase
			void entrevista();
			// funciones virtuales a desarrollar
			void partido();
			void entrenamiento();
	};
}