#include <iostream>

using namespace std;
int main()
{
	double firstValue, secondValue;
	char operation;
	cout << "Enter first value" << endl;
	cin >> firstValue;

	cout << "Enter second value" << endl;
	cin >> secondValue;

	cout << "Enter operation value" << endl;
	cin >> operation;

	switch (operation)
	{
	case '+':
		cout << "Your value:" << firstValue + secondValue << endl;
		break;

	case '-':
		cout << "Your value:" << firstValue - secondValue << endl;
		break;

	case '*':
		cout << "Your value:" << firstValue * secondValue << endl;
		break;

	case '/':
		cout << "Your value:" << firstValue / secondValue << endl;
		break;
	}
	return 0;
}

