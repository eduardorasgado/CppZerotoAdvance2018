#include <iostream>

class Slave
{
	private:
		std::string name;
		static int number;

	public:
		Slave(std::string name)
		{
			this->name = name;
			// number increases each time a instance
			// is created
			number++;
		}

		int getNumber();
		std::string getName();
		void sayHi();
		static void saySomething();
};