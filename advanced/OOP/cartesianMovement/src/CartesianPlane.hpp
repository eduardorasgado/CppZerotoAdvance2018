class CartesianPlane
{
	private:
		int x;
		int y;

	public:
		CartesianPlane(int x, int y) // CONSTRUCTOR 1
		{
			this->x = x;
			this->y = y;
		}

		void moveUp(int);
		void moveDown(int);
		void moveRight(int);
		void moveLeft(int);

		//GETTERS
		int getX();
		int getY();
	
};