#include <iostream>

using namespace std;

class Dollars
{
private:
	int m_dollars;

public:
	Dollars(int dollars) { m_dollars = dollars; }
	int getDollars() const { return m_dollars; }

	friend Dollars operator+(const Dollars& d1, const Dollars& d2);
	//{
	//	return Dollars(d1.m_dollars + d2.m_dollars);
	//}

	friend Dollars operator-(const Dollars& d1, const Dollars& d2);
	//{
	//	return Dollars(d1.m_dollars - d2.m_dollars);
	//}

	friend Dollars operator+(int value, const Dollars& d1);

};

Dollars operator+(const Dollars& d1, const Dollars& d2)
{
	//return Dollars(d1.getDollars() + d2.getDollars());
	return Dollars(d1.m_dollars + d2.m_dollars);
}

Dollars operator-(const Dollars& d1, const Dollars& d2)
{
	//return Dollars(d1.getDollars() - d2.getDollars());
	return Dollars(d1.m_dollars - d2.m_dollars);
}

Dollars operator+(int value, const Dollars& d1)
{
	return Dollars(d1.m_dollars + value);
}


int main() 
{
	Dollars dollars1(7);
	Dollars dollars2(9);
	//Dollars dollarsSum = dollars1 + dollars2;
	Dollars dollarsSum = dollars1 - dollars2;
	cout << "I have " << dollarsSum.getDollars() << " dollars." << endl;
	int val = 15;
	dollarsSum = dollars1 + val;
	cout << "I have " << dollarsSum.getDollars() << " dollars." << endl;
	return 0;
	
}



