// 13.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Numbers
{
public:

	Numbers(int first, int second)
	{
		m_first = first;
		m_second = second;
	}

	Numbers()
	{
		m_first = 0;
		m_second = 0;
	}

	void print()
	{
		cout << "( " << m_first << ", " << m_second << " )\n";
	}

	void set(int first, int second)
	{
		m_first = first;
		m_second = second;
		print();
	}

	void setFirst(int val) { m_first = val; }
	void setSecond(int val){ m_second = val; }
	int getFirst(){ return m_first; }
	int getSecond(){ return m_second; }

private:
	int m_first;
	int m_second;
};


int main()
{
	Numbers n1;
	n1.print();
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3

	Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4

	n1.print();
	n2.print();

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
