class Vector
{
	private:
		double* element;
		int size;

	public:
		Vector(int s) : element
						{
							new double[s]
						}, size
						{
							s
						} // construct a vector
		{
			// CONSTRUCT
		}
		// constructor a vector

		double& operator[](int i)
		{
			return element[i];
		} // element access: subscripting
		int sizeReturn()
		{
			return size;
		}

		double read_and_sum(int s);
};