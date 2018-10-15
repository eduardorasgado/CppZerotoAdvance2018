#pragma once

#include <iostream>

namespace Soccer
{
	class Persona
	{
		// La clase persona es una clase abstracta
		private:
			std::string nombre;
			std::string apellido;
			int edad;

		public:
			Persona(std::string nombre, std::string apellido, int edad)
					: nombre{nombre}, apellido{apellido}, edad{edad}{}

			~Persona(){ } // Destructor

			void viajar();
			// funciones a desarrollar o genericos
			virtual void partido() = 0;
			virtual void entrenamiento() = 0;
	};
}