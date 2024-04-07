#include <iostream>

//b) Добавьте перегрузку оператора умножения(*) для выполнения операции умножения
//объекта класса Fraction на целочисленное значение и для перемножения двух 
//объектов класса Fraction.Используйте способ перегрузки оператора через дружественную функцию.

//c) Дробь 2 / 4 — это та же дробь, что и 1 / 2, только 1 / 2 не делится до минимальных
//неделимых значений.Мы можем уменьшить любую заданную дробь до наименьших значений, найдя 
//наибольший общий делитель(НОД) для числителя и знаменателя, а затем выполнить деление как числителя, 
//так и знаменателя на НОД.
//Добавьте эту функцию в ваш класс и реализуйте метод reduce(), который будет уменьшать дробь.Убедитесь, что дробь будет максимально и корректно уменьшена.


//3 / 4
//2 / 7
//6 / 28
//9 / 4
//6 / 7
//6 / 24


int nod(int a, int b) {
	return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
}


class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;
public:
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
		reduce();
	}

	void print()
	{
		std::cout << m_numerator << "/" << m_denominator << "\n";
	}

	void reduce()
	{
		int n = nod(m_numerator, m_denominator);
		m_numerator /= n;
		m_denominator /= n;

		//int n = 0;
		//do {
		//	n = nod(m_numerator, m_denominator);
		//	m_numerator /= n;
		//	m_denominator /= n;
		//} while (n != 1);
	}

	friend Fraction operator*(const Fraction& f, int value);
	friend Fraction operator*(int value, const Fraction& f);
	friend Fraction operator*(const Fraction& f1, const Fraction& f2);
};


Fraction operator*(const Fraction& f, int value)
{
	return Fraction(f.m_numerator * value, f.m_denominator);
}

Fraction operator*(int value, const Fraction& f )
{
	return Fraction(f.m_numerator * value, f.m_denominator);
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

int main()
{
	Fraction f1(3, 4);
	f1.print();

	Fraction f2(2, 7);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 3;
	f4.print();

	Fraction f5 = 3 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();

	return 0;
}