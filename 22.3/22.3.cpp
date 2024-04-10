#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
		reduce();
	}

	static int nod(int a, int b)
	{
		return b == 0 ? a : nod(b, a % b);
	}

	void reduce()
	{
		int nod = Fraction::nod(m_numerator, m_denominator);
		m_numerator /= nod;
		m_denominator /= nod;
	}

	friend Fraction operator*(const Fraction& f1, const Fraction& f2);
	friend Fraction operator*(const Fraction& f1, int value);
	friend Fraction operator*(int value, const Fraction& f1);

	void print()
	{
		std::cout << m_numerator << "/" << m_denominator << "\n";
	}

	friend std::ostream& operator<< (std::ostream& out, const Fraction& fraction);
	friend std::istream& operator>> (std::istream& in, Fraction& fraction);
};

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

Fraction operator*(const Fraction& f1, int value)
{
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}

Fraction operator*(int value, const Fraction& f1)
{
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}

std::ostream& operator<< (std::ostream& out, const Fraction& fraction)
{
	out << fraction.m_numerator << '/' << fraction.m_denominator;
	return out;
}

std::istream& operator>> (std::istream& in, Fraction& fraction)
{
	char ch;
	in >> fraction.m_numerator;
	in >> ch;
	in >> fraction.m_denominator;
	return in;
}
// Enter fraction 1: 3/4
// Enter fraction 2: 4/9
// 3/4 * 4/9 is 1/3

int main()
{

	Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;

	Fraction f2;
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

	return 0;
}

