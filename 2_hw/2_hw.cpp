#include <iostream>
using namespace std;


int main()
{
	double value;
	double value2;
	uint8_t oper;
	cin >> value;
	cin >> value2;
	cin >> oper;
	if (oper == '+')
		cout << value << "+" << value2 << '=' << value + value2;
	else if (oper == '-')
		cout << value << "-" << value2 << '=' << value - value2;
	else if (oper == '/')
		cout << value << "/" << value2 << '=' << value / value2;
	else if (oper == '*')
		cout << value << "*" << value2 << '=' << value * value2;
	else {
		cout << "invalid input: " << oper;
	}


}