#include <iostream>

class Dollars
{
private:
    int m_dollars;

public:
    Dollars(int dollars) { m_dollars = dollars; }

    // Выполняем -Dollars через метод класса
    Dollars operator-() const;

    int getDollars() const { return m_dollars; }
    friend Dollars operator-(const Dollars& d1, const Dollars& d2);
};

Dollars operator-(const Dollars& d1, const Dollars& d2)
{
    return Dollars(d1.m_dollars - d2.m_dollars);
}

// Эта функция является методом класса!
Dollars Dollars::operator-() const
{
    return Dollars(-m_dollars);
}

int main()
{
    const Dollars dollars1(7);
    const Dollars dollars2(2);
    Dollars dollars3 = dollars1 - dollars2;
    std::cout << "My debt is " << dollars3.getDollars() << " dollars.\n";
    std::cout << "My debt is " << (-dollars1).getDollars() << " dollars.\n";

    return 0;
}