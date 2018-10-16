#pragma once

#include <iostream>
#include "../Persona/Persona.h"

namespace Soccer
{
	class Medico : public Persona
	{
		private:
			std::string titulacion;
			int experienceYears;

		public:
			Medico(std::string nombre, std::string apellido,
					int edad, std::string titulacion,
					int experienceYears)
					: Persona(nombre, apellido, edad)
			{
				this->titulacion = titulacion;
				this->experienceYears = experienceYears;
			}

			~Medico() { } // Destructor

			// metodo propio de la clase
			void curarLesion();

			// Desarrollo de metodos vituales de Persona
			void partido();
			void entrenamiento();
	};
}