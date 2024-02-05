// 4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

//enum Colors {
//	COLOR_GRAY = -5,
//	COLOR_PINK = -7,
//	COLOR_BLUE = 3,
//	COLOR_PURPLE = 5,
//	COLOR_RED = 14
//};
//

enum DaysOfWeek {
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY = 3,
	THURSDAY = 4,
	FRIDAY = 5,
	SATURDAY = 6,
	SUNDAY = 0
};

void printDay(DaysOfWeek day)
{
	switch (day)
	{
	case MONDAY:
		std::cout << "MONDAY";
		break;
	case TUESDAY:
		std::cout << "TUESDAY";
		break;
	case WEDNESDAY:
		std::cout << "WEDNESDAY";
		break;
	case THURSDAY:
		std::cout << "THURSDAY";
		break;
	case FRIDAY:
		std::cout << "FRIDAY";
		break;
	case SATURDAY:
		std::cout << "SATURDAY";
		break;
	case SUNDAY:
		std::cout << "SUNDAY";
		break;
	default:
		std::cout << "Unknown";
		break;
	}
}


int main()
{
	int num;
	cin >> num;
	DaysOfWeek day = static_cast<DaysOfWeek>(num % 7);  //Явное преобразование типов
	printDay(day);

	//int num1 = 3.3;
	int num1 = static_cast<int>(3.3);

	float num2 = num1;
	cout << endl << num1;
	cout << endl << num2;
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
