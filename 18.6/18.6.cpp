#include <iostream>

class Dollars
{
private:
    int m_dollars;

public:
    Dollars(int dollars) { m_dollars = dollars; }

    int getDollars() const { return m_dollars; }
};

Dollars add(const Dollars& d1, const Dollars& d2)
{
    return Dollars(d1.getDollars() + d2.getDollars()); // возвращаем анонимный объект класса Dollars
}

int main()
{
    Dollars dollars1(7);
    Dollars dollars2(9);
    Dollars sum = add(dollars1, dollars2);
    std::cout << "I have " << sum.getDollars() << " dollars." << std::endl; // выводим анонимный объект класса Dollars

    return 0;
}