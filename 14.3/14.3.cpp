﻿// 14.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Теперь попробуем что - то посложнее.Напишите класс, который реализует функционал стека.Класс Stack должен иметь :
//
//закрытый целочисленный фиксированный массив длиной 10 элементов;
//
//закрытое целочисленное значение для отслеживания длины стека;
//
//открытый метод с именем reset(), который будет инициализировать значением 0 длину и все значения элементов;
//
//открытый метод с именем push(), который будет добавлять значение в стек.Метод push() должен возвращать значение false, если массив уже заполнен, в противном случае — true;
//
//открытый метод с именем pop() для возврата значений из стека.Если в стеке нет значений, то должен выводиться стейтмент assert;
//
//открытый метод с именем print(), который будет выводить все значения стека.

#include <iostream>
#include <cassert>

using namespace std;

class Stack
{
public:
	void reset()
	{
		m_count = 0;
	}

	void print()
	{
		for (int i = 0; i < m_count; i++)
		{
			cout << m_array[i] << " ";
		}
		cout << endl;
	}

	bool push(int val)
	{
		if (m_count == 10) return false;
		m_array[m_count++] = val;
	}

	int pop()
	{
		assert(m_count == 0);
		return m_array[--m_count];
	}

private:
	int m_array[10];
	int m_count;
};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

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
