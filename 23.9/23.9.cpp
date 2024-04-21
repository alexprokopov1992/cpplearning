#include <iostream>

class Number
{
private:
    int m_number;
public:
    Number(int number = 0)
        : m_number(number)
    {
    }

    Number& operator++();
    Number& operator--();

    friend std::ostream& operator<< (std::ostream& out, const Number& n);
};

Number& Number::operator++()
{
    // Если значением переменной m_number является 8, то выполняем сброс значения m_number на 0
    if (m_number == 8)
        m_number = 0;
    // В противном случае, просто увеличиваем m_number на единицу
    else
        ++m_number;

    return *this;
}

Number& Number::operator--()
{
    // Если значением переменной m_number является 0, то присваиваем m_number значение 8
    if (m_number == 0)
        m_number = 8;
    // В противном случае, просто уменьшаем m_number на единицу
    else
        --m_number;

    return *this;
}

std::ostream& operator<< (std::ostream& out, const Number& n)
{
    out << n.m_number;
    return out;
}

int main()
{
    Number number(7);
    std::cout << number;
    std::cout << ++number;
    std::cout << ++number;
    std::cout << --number;
    std::cout << --number;

    return 0;
}