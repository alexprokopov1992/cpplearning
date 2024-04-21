#include <iostream>

class Dollars
{
private:
    int m_dollars;
public:
    Dollars(int dollars = 0)
    {
        m_dollars = dollars;
    }

    // Перегрузка операции преобразования значения типа Dollars в значение типа int
    operator int() { return m_dollars; }

    int getDollars() { return m_dollars; }
    void setDollars(int dollars) { m_dollars = dollars; }
};

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents = 0)
    {
        m_cents = cents;
    }

    // Выполняем конвертацию Cents в Dollars
    operator Dollars() { return Dollars(m_cents / 100); }
};

void printDollars(Dollars dollars)
{
    std::cout << dollars; // dollars неявно конвертируется в int здесь
}

int main()
{
    Cents cents(700);
    printDollars(cents); // cents неявно конвертируется в Dollars здесь

    return 0;
}