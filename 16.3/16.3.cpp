﻿// 16.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

//Напишите класс с именем RGBA, который содержит 4 переменные - члены типа std::uint8_t(подключите заголовочный файл cstdint для доступа к типу std::uint8_t) :
//
//m_red;
//
//m_green;
//
//m_blue;
//
//m_alpha.
//
//Присвойте 0 в качестве значения по умолчанию для m_red, m_green и m_blue, и 255 для m_alpha.
//Создайте конструктор со списком инициализации членов, который позволит пользователю передавать значения для m_red, m_green, m_blue и m_alpha.
//Напишите функцию print(), которая будет выводить значения переменных - членов.
//
//Подсказка: Если функция print() работает некорректно, то убедитесь, что вы конвертировали std::uint8_t в int.

//r = 0 g = 135 b = 135 a = 255

class RGBA
{
private:
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
public:
	RGBA(uint8_t red = 0, uint8_t blue = 0, uint8_t green = 0, uint8_t alpha = 255) : m_red(red), m_blue(blue), m_green(green), m_alpha(alpha)
	{
	}

	void print()
	{
		cout << "r = " << static_cast<int>(m_red) <<
			   " g = " << static_cast<int>(m_green) <<
			   " b = " << static_cast<int>(m_blue) <<
			   " a = " << static_cast<int>(m_alpha) << endl;
	}
};

int main()
{
 
	RGBA color(0, 135, 135);
	color.print();
	int n = 0;
	for (uint8_t i = 0; i < 255; i++)
	{
		cout << n++ << ": " << i << endl;
	}


	uint8_t val = 97;
	cout << static_cast<char>(val - 32);
	cout << val;
	cout << val - 32;
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
