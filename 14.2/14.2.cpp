// 14.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

//a) Напишите простой класс с именем Numbers.Этот класс должен иметь :
//
//три закрытые переменные - члены типа double : m_a, m_b и m_c;
//
//открытый метод с именем setValues(), который позволит устанавливать значения для m_a, m_b и m_c;
//
//открытый метод с именем print(), который будет выводить объект класса Numbers в следующем формате : <m_a, m_b, m_c>.

//b) Добавьте функцию isEqual() в класс Numbers, чтобы следующий код работал корректно :

class Numbers
{
private:
    double m_a;
    double m_b;
    double m_c;
public:
    void setValues(double a, double b, double c)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }

    void print()
    {
        cout << "<" << m_a << ", " << m_b << ", " << m_c << ">";
    }

    bool isEqual(const Numbers& other)
    {
        return (m_a == other.m_a && m_b == other.m_b && m_c == other.m_c);
    }
};


int main()
{
    Numbers point1;
    point1.setValues(3.0, 4.0, 5.0);

    Numbers point2;
    point2.setValues(3.0, 4.0, 5.0);

    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";

    Numbers point3;
    point3.setValues(7.0, 8.0, 9.0);

    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
