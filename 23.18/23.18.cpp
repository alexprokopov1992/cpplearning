// Значение типа с плавающей точкой — это число с десятичной дробью, 
// где количество цифр после точки (дробная часть) может меняться. 
// Значение типа с фиксированной точкой — это число с дробью, 
// где дробь (после точки) фиксированная.

// Вам нужно написать класс для реализации значений типа с фиксированной точкой с 
// двумя цифрами после точки (например, 11.47, 5.00 или 1465.78). 
// Диапазон класса должен быть от -32768.99 до 32767.99, в дробной части могут быть любые две цифры, 
// не допускайте проблем с точностью.

// a) Какого типа данных переменную-член следует использовать для 
// реализации значений типа с фиксированной точкой с 2-мя цифрами после точки? 
// (Обязательно прочитайте ответ, прежде чем приступать к выполнению следующего задания)

// b) Напишите класс FixedPoint, который реализует рекомендуемое решение из предыдущего задания. 
// Если дробная или целая части значения являются отрицательными, то число должно рассматриваться, 
// как отрицательное. Реализуйте перегрузку необходимых операторов и напишите необходимые конструкторы, 
// чтобы следующий код функции main():

// Выдавал следующий результат:

// 37.58
// -3.09
// -4.07
// -5.07
// -0.03
// -0.03

// c) Теперь добавьте конструктор, который будет принимать значение типа double.
// Вы можете округлить целую часть (слева от точки) с помощью функции round() 
// (которая находится в заголовочном файле cmath).

// Должен выдавать следующий результат:

// 0.03
// -0.03
// 4.01
// -4.01

// d) Выполните перегрузку следующих операторов: ==, >>, − (унарный) и + (бинарный).

// true
// true
// true
// true
// true
// true
// true
// true
// -0.48
// 0.48
// Enter a number: 5.678
// You entered: 5.68

#include <cmath>
#include <iostream>
#include <cstdint>

using namespace std;

class FixedPoint
{
private:
    int16_t m_base;
    int8_t  m_decimal;
public:
    FixedPoint(int16_t base, int8_t decimal) : m_base(base), m_decimal(decimal)
    {
        if (m_base < 0 || m_decimal < 0)
        {
            if (m_base > 0) m_base = -m_base;
            if (m_decimal > 0) m_decimal = -m_decimal;
        }
    }

    FixedPoint(double val)
    {
        m_base = trunc(val);
        m_decimal = round((val - m_base) * 100);
    }

    operator double() const
    {
        return m_base + static_cast<double>(m_decimal) / 100;
    }

    friend std::ostream& operator<<(std::ostream& out, const FixedPoint& fp)
    {
        out << static_cast<double>(fp);
        return out;
    }

    friend bool operator==(const FixedPoint& fp1, const FixedPoint& fp2)
    {
        return (fp1.m_base == fp2.m_base && fp1.m_decimal == fp2.m_decimal);
    }

    friend std::istream& operator >> (std::istream& in, FixedPoint& fp)
    {
        double value;
        in >> value;
        fp = FixedPoint(value);
        return in;
    }

    friend FixedPoint operator+(const FixedPoint& fp1, const FixedPoint& fp2)
    {
        return FixedPoint(static_cast<double>(fp1) + static_cast<double>(fp2));
    }

    FixedPoint operator-()
    {
        return FixedPoint(-m_base, -m_decimal);
    }

};

void SomeTest()
{
    std::cout << std::boolalpha;
    std::cout << (FixedPoint(0.75) + FixedPoint(1.23) == FixedPoint(1.98)) << '\n'; // оба значения положительные, никакого переполнения
    std::cout << (FixedPoint(0.75) + FixedPoint(1.50) == FixedPoint(2.25)) << '\n'; // оба значения положительные, переполнение
    std::cout << (FixedPoint(-0.75) + FixedPoint(-1.23) == FixedPoint(-1.98)) << '\n'; // оба значения отрицательные, никакого переполнения
    std::cout << (FixedPoint(-0.75) + FixedPoint(-1.50) == FixedPoint(-2.25)) << '\n'; // оба значения отрицательные, переполнение
    std::cout << (FixedPoint(0.75) + FixedPoint(-1.23) == FixedPoint(-0.48)) << '\n'; // второе значение отрицательное, никакого переполнения
    std::cout << (FixedPoint(0.75) + FixedPoint(-1.50) == FixedPoint(-0.75)) << '\n'; // второе значение отрицательное, возможно переполнение
    std::cout << (FixedPoint(-0.75) + FixedPoint(1.23) == FixedPoint(0.48)) << '\n'; // первое значение отрицательное, никакого переполнения
    std::cout << (FixedPoint(-0.75) + FixedPoint(1.50) == FixedPoint(0.75)) << '\n'; // первое значение отрицательное, возможно переполнение
}

int main()
{
    SomeTest();

    FixedPoint a(-0.48);
    std::cout << a << '\n';

    std::cout << -a << '\n';

    std::cout << "Enter a number: "; // введите 5.678
    std::cin >> a;

    std::cout << "You entered: " << a << '\n';

    return 0;
}