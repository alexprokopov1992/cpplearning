#include "Dollars.h"

// ����������: ��� ������� �� �������� �� ������� ������, �� ������������� ������ Dollars!
Dollars operator+(const Dollars& d1, const Dollars& d2)
{
	// ���������� ����������� Dollars � operator+(int, int).
	// ����� ��� �� ����� ������ ������ � �������� ������ ������ Dollars
	return Dollars(d1.getDollars() + d2.getDollars());
}