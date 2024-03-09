// 13.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct DateStruct
{
    int day;
    int month;
    int year;

    void print()
    {
        std::cout << day << "/" << month << "/" << year << endl;
    }
};

class DateClass
{
public:
    DateClass(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }
    DateClass(int day)
    {
        m_day = day;
        m_month = 1;
        m_year = 2023;
    }
    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year << endl;
    }
private:
    int m_day;
    int m_month;
    int m_year;
};



int main()
{
    DateStruct todayStructObject{ 12, 11, 2018 };
    DateClass todayClassObject = { 12, 11, 2018 };
    DateClass todayClassObject2{ 12 };

    DateClass myObject(12, 11, 2018);

    todayStructObject.day = 18;
    todayStructObject.print();
    todayClassObject.print();
    todayClassObject2.print();
    
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
