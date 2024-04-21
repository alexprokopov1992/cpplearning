#include <iostream> 
#include <cassert>

class Drob
{
private:
    int m_numerator;
    int m_denominator;

public:
    // Конструктор по умолчанию
    Drob(int numerator = 0, int denominator = 1) :
        m_numerator(numerator), m_denominator(denominator)
    {
        assert(denominator != 0);
    }

    // Конструктор копирования
    Drob(const Drob& copy) :
        m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
    {
        // Нет необходимости выполнять проверку denominator здесь, так как она осуществляется в конструкторе по умолчанию
        std::cout << "Copy constructor worked here!\n"; // просто чтобы показать, что это работает
    }

    friend std::ostream& operator<<(std::ostream& out, const Drob& d1);
    int getNumerator() { return m_numerator; }
    void setNumerator(int numerator) { m_numerator = numerator; }
};

std::ostream& operator<<(std::ostream& out, const Drob& d1)
{
    out << d1.m_numerator << "/" << d1.m_denominator;
    return out;
}

Drob makeNegative(Drob d) // правильно было бы здесь использовать константную ссылку
{
    std::cout << "1\n";
    d.setNumerator(-d.getNumerator());
    std::cout << "2\n";
    return d;
}

int main()
{
    Drob sixSeven(6, 7);
    std::cout << "start\n";
    std::cout << makeNegative(sixSeven);
    std::cout << "\n3\n";
    return 0;
}