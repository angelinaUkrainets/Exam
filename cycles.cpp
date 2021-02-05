#include <iostream>

using namespace std;

int main()
{
	////first task
	//unsigned int heights;

	//cout << "Please, enter heights" << endl;
	//cin >> heights;

	//for(int i = 1; i<=heights; i++)
	//{
	//	for(int j = 0; j<i; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	////second task
	//unsigned short number;
	//int sum = 0;

	//cout << "Please, enter a number(0 < number < 101) ";
	//cin >> number;

	//if(number > 100 || number < 1)
	//{
	//	cout << "Number is not correct";
	//	return 0;
	//}

	//for(int i =1; i<=number; i++)
	//{
	//	sum += i;
	//}

	//cout << "Sum: " << sum << endl;

	////third task
	//int a, b, count = 0;

	//cout << "Please, enter two numbers" << endl;
	//cin >> a >> b;

	//for(int i =a; i<b; i++)
	//{
	//	for(int j = 2; j<=i-1; j++)
	//	{
	//		if (i % j == 0)
	//			count++;
	//	}
	//	if (count == 0)
	//		cout << i << endl;

	//	count = 0;
	//}

	////fourth task
	//int num, count2 = 0;

	//cout << "Please, enter a number" << endl;
	//cin >> num;

	//while(true)
	//{
	//	num++;
	//	for(int j = num -1; j >1; j--)
	//	{
	//		if (num % j == 0)
	//			count2++;
	//	}
	//	if(count2 == 0)
	//	{
	//		cout << "Number: " << num << endl;
	//		break;
	//	}

	//	count2 = 0;
	//}

	//fifth task
	int num, sum = 0;

	cout << "Please, enter a number" << endl;
	cin >> num;

	while(num > 0)
	{
		int digit = num % 10;
		sum += digit;
		num /= 10;
	}

	cout << "Sum of digits is " << sum << endl;
}

