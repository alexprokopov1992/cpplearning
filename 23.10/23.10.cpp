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

    Number& operator++(); // версия префикс
    Number& operator--(); // версия префикс

    Number operator++(int); // версия постфикс
    Number operator--(int); // версия постфикс

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

Number Number::operator++(int)
{
    // Создаем временный объект класса Number с текущим значением переменной m_number
    Number temp(m_number);

    // Используем оператор инкремента версии префикс для реализации перегрузки оператора инкремента версии постфикс
    ++(*this); // реализация перегрузки

    // Возвращаем временный объект
    return temp;
}

Number Number::operator--(int)
{
    // Создаем временный объект класса Number с текущим значением переменной m_number
    Number temp(m_number);

    // Используем оператор декремента версии префикс для реализации перегрузки оператора декремента версии постфикс
    --(*this); // реализация перегрузки

    // Возвращаем временный объект
    return temp;
}

std::ostream& operator<< (std::ostream& out, const Number& n)
{
    out << n.m_number;
    return out;
}

int main()
{
    Number number(6);

    std::cout << number;
    std::cout << ++number; // вызывается Number::operator++();
    std::cout << number++; // вызывается Number::operator++(int);
    std::cout << number;
    std::cout << --number; // вызывается Number::operator--();
    std::cout << number--; // вызывается Number::operator--(int);
    std::cout << number;

    return 0;
}