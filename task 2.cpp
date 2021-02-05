#include <iostream>

using namespace std;

class Vect
{
	double _x, _y;
public:
	//ctor
	Vect(double x = 0, double y = 0)
	{
		_x = x;
		_y = y;
	}

	//getters
	double GetX()
	{
		return _x;
	}
	double GetY()
	{
		return _y;
	}

	//methods
	Vect *pluss(Vect v2)
	{
		return new Vect((_x + v2.GetX()), (_y + v2.GetY()));
	}
	Vect *minus(Vect v2)
	{
		return new Vect((_x - v2.GetX()), (_y - v2.GetY()));
	}

	void Print()
	{
		cout << "( " << _x << " ; " << _y << " )" << endl;
	}
};

int main()
{
	unique_ptr<Vect> vector(new Vect(-3, 8)), vector2(new Vect(4, 0));

	cout << "Vector 1, vector 2" << endl;
	vector->Print();
	vector2->Print();

	cout << endl << "v1 + v2 : ";
	auto v = *vector->pluss(*vector2);
	v.Print();

	cout << "v2 - v1 : ";
	v = *vector2->minus(*vector);
	v.Print();
}
