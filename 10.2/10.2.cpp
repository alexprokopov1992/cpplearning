// 10.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//Создайте структуру, содержащую имя и оценку учащегося(по шкале от 0 до 100).
//Спросите у пользователя, сколько учеников он хочет ввести.
//Динамически выделите массив для хранения всех студентов.
//Затем попросите пользователя ввести для каждого студента его имя и оценку.
//Как только пользователь ввел все имена и оценки, отсортируйте список оценок
//студентов по убыванию(сначала самый высокий бал).Затем выведите все имена и 
//оценки в отсортированном виде.
//
//Для следующего ввода :
//
//Andre
//74
//Max
//85
//Anton
//12
//Josh
//17
//Sasha
//90
//
//Вывод должен быть следующим :
//
//Sasha got a grade of 90
//Max got a grade of 85
//Andre got a grade of 74
//Josh got a grade of 17
//Anton got a grade of 12

struct Student
{
	std::string name;
	int grade;
};

void sortNames(Student*, int);


int main()
{
	int numStudents = 0;
	do
	{
		std::cout << "How many students do you want to enter? ";
		std::cin >> numStudents;
	} while (numStudents <= 1);

	Student* students = new Student[numStudents];

	for (int index = 0; index < numStudents; ++index)
	{
		std::cout << "Enter name #" << index + 1 << ": ";
		std::cin >> students[index].name;
		std::cout << "Enter grade #" << index + 1 << ": ";
		std::cin >> students[index].grade;
	}

	sortNames(students, numStudents);

	for (int index = 0; index < numStudents; ++index)
		std::cout << students[index].name << " got a grade of " << students[index].grade << "\n";

	delete[] students;

	return 0;
}

void sortNames(Student* students, int length)
{
	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int largestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (students[currentIndex].grade > students[largestIndex].grade)
				largestIndex = currentIndex;
		}

		std::swap(students[startIndex], students[largestIndex]);
	}
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
