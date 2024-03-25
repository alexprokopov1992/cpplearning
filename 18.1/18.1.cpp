// 18.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Anything
{
private:
    int m_value;
public:
    Anything() { m_value = 0; }
    void add(int value) { m_value += value; }

    // Делаем функцию reset() дружественной классу Anything
    friend void reset(Anything& anything);
};

// Функция reset() теперь является другом класса Anything
void reset(Anything& anything)
{
    // И мы имеем доступ к закрытым членам объектов класса Anything
    anything.m_value = 0;
}

class Something
{
private:
    int m_value;
public:
    Something(int value) { m_value = value; }
    friend bool isEqual(const Something& value1, const Something& value2);
};

bool isEqual(const Something& value1, const Something& value2)
{
    return (value1.m_value == value2.m_value);
}


int main()
{
    Anything one;
    one.add(4); // добавляем 4 к m_value
    reset(one); // сбрасываем m_value в 0

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
