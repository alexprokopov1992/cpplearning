// 15.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cassert>

using namespace std;

//Конструктор — это особый тип метода класса, который автоматически вызывается при создании объекта этого же класса.
//Конструкторы обычно используются для инициализации переменных - членов класса значениями, которые предоставлены по умолчанию/пользователем, 
//или для выполнения любых шагов настройки, необходимых для используемого класса(например, открыть определенный файл или базу данных).

class Boo
{
public:

    int m_a;
    int m_b;
};

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    //Fraction() // конструктор по умолчанию 
    //{
    //    m_numerator = 0;
    //    m_denominator = 1;
    //}

    // Конструктор с двумя параметрами, один из которых имеет значение по умолчанию
    Fraction(int numerator = 0, int denominator = 1)
    {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }

    void print()
    {
        std::cout << m_numerator << "/" << m_denominator << '\n';
    }
    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

class Date
{
private:
    int m_day = 12;
    int m_month = 1;
    int m_year = 2018;

public:
    Date() // неявно генерируемый конструктор
    {

    }
    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year << '\n';
    }
};

int main()
{
    Boo boo1 = { 7, 8 }; // список инициализаторов
    Boo boo2{ 9, 10 }; // uniform-инициализация (C++11)
    Boo boo3;



    Fraction drob; // так как нет никаких аргументов, то вызывается конструктор по умолчанию Fraction()
    drob.print();
    Fraction drob2(3);
    drob2.print();
    Fraction drob3(3, 2);
    drob3.print();
    //Fraction drob4(3, 0);
    //drob4.print();

    Fraction drob5 = Fraction(8);
    drob5.print();

    Date date;
    date.print();

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
