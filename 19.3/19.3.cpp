﻿// 19.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//a) Напишите класс с именем Point.В классе Point должны быть две переменные -
//члены типа double: m_a и m_b со значениями по умолчанию 0.0.
//Напишите конструктор для этого класса и функцию вывода print().
//Point(0, 0)
//Point(2, 5)

//b) Теперь добавим метод distanceTo(), который будет принимать второй объект класса Point
//в качестве параметра и будет вычислять расстояние между двумя объектами.Учитывая две точки
//(a1, b1) и(a2, b2), расстояние между ними можно вычислить следующим образом :
//sqrt((a1 - a2)* (a1 - a2) + (b1 - b2) * (b1 - b2)).Функция sqrt() находится в заголовочном файле cmath.

//c) Измените функцию distanceTo() из метода класса в дружественную функцию,
//которая будет принимать два объекта класса Point в качестве параметров.Переименуйте эту функцию на distanceFrom().
//Point(0, 0)
//Point(2, 5)
//Distance between two points : 5.38516


#include <iostream>
#include <cmath>

class Point {
private:
    double m_a;
    double m_b;
public:
    Point(double a = 0, double b = 0) : m_a(a), m_b(b) {}
    void print()
    {
        std::cout << "Point(" << m_a << ", " << m_b << ")\n";
    }

    friend double distanceFrom(const Point& point1, const Point& point2);


};

double distanceFrom(const Point& point1, const Point& point2)
{
    return sqrt(pow(point1.m_a - point2.m_a, 2) + pow(point1.m_b - point2.m_b, 2));
}


int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

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
