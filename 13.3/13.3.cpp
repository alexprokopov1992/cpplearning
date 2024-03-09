#include <iostream>

class DateClass // члены класса являются закрытыми по умолчанию 
{
	int m_day; // закрыто по умолчанию, доступ имеют только другие члены класса
	int m_month; // закрыто по умолчанию, доступ имеют только другие члены класса
	int m_year; // закрыто по умолчанию, доступ имеют только другие члены класса

public:
	int m_number = 0;

	void setDate(int day, int month, int year)
	{
		m_day = day;
		m_month = month;
		m_year = year;
	}

	void print()
	{
		std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
	}

	// Обратите внимание на этот дополнительный метод
	void copyFrom(const DateClass& b)
	{
		// Мы имеем прямой доступ к закрытым членам объекта b
		m_day = b.m_day ;
		m_month = b.m_month;
		m_year = b.m_year;
	}
};

//Открытый член — это член класса, доступ к которому имеют объекты как внутри, так и извне класса.
//Закрытый член — это член класса, доступ к которому имеют только другие члены этого же класса.
//В языке С++ есть 3 спецификатора доступа :
//public;
//private;
//protected.

int main()
{
	DateClass date;
	date.setDate(12, 11, 2018); // ок, так как setDate() имеет спецификатор доступа public

	DateClass copy;
	copy.copyFrom(date); // ок, так как copyFrom() имеет спецификатор доступа public
	copy.print();
	date.print();

	return 0;
}