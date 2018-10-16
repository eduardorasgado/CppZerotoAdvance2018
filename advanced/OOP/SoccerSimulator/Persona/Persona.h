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

			Persona() { }  // Constructor vacio para poder crear arreglos
			~Persona(){ } // Destructor

			void viajar();

			//gettters
			std::string getNombre();
			std::string getApellido();

			// funciones a desarrollar o genericos
			virtual void partido() = 0;
			virtual void entrenamiento() = 0;
	};
}