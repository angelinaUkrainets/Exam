#include <iostream>

using namespace std;

void Multiple(int n)
{
	for(int i =1; i<=10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
}

void Convert(double km)
{
	cout << km << " km = " << km * 0.62 << " miles" << endl;
}

void Power(double n, int step)
{
	int pow = 1;

	for(int i =0; i<step; i++)
	{
		pow *= n;
	}

	cout << "Power of number " << n << " = " << pow << endl;
}

void Factorial(int n)
{
	int factorial = 1;

	for(int i = 1; i<=n; i++)
	{
		factorial *= i;
	}

	cout << "Factorial of number " << n << " = " << factorial << endl;
}

int FactorialR(int n)
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	else
		return n * FactorialR(n - 1);
}

int main()
{
	int n;
	
	cout << "Enter number" << endl;
	cin >> n;

	Multiple(n);

	double km;

	cout << "How much km?" << endl;
	cin >> km;

	Convert(km);

	double num;
	int step;

	cout << "Enter number" << endl;
	cin >> num;
	cout << "Enter step" << endl;
	cin >> step;

	Power(num, step);

	int number, factorial;

	cout << "Enter number" << endl;
	cin >> number;

	Factorial(number);
	factorial = FactorialR(number);
	cout << "Recursion : " << factorial << endl;
}

