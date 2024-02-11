// 11.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

//Задание №1
//Напишите прототипы функций для следующих случаев.Используйте const при необходимости.

//a) Функция с именем max(), которая принимает два значения типа double и возвращает большее из них.
//b) Функция swap(), которая меняет местами два целых числа.
//c) Функция getLargestElement(), которая принимает динамически выделенный массив целых чисел и возвращает наибольшее число таким образом, что caller может изменить значение возвращаемого элемента(не забудьте о параметре - длине).

double max(const double&, const double&);
void swap(int&, int&);
int& getLargestElement(int*, int);


int main()
{
    double a = 15.2;
    double b = 13.3;
    cout << max(a, b) << endl;
    cout << max(b, a) << endl;

    int var1 = 15;
    int var2 = 20;
    cout << "Origin variables: " << var1 << " " << var2 << endl;
    swap(var1, var2);
    cout <<"Swapped variables: " << var1 << " " << var2 << endl;

    int arr[5] = { 1,2,3,4,5 };
    int& max_element = getLargestElement(arr, sizeof(arr) / sizeof(int));
    cout << max_element << endl;
    max_element += 1;
    for (auto el : arr)
    {
        cout << el << " ";
    }
    cout << endl;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

double max(const double& a, const double& b)
{
    return a > b ? a : b;
}

int& getLargestElement(int* arr, int length)
{
    int LargestElementIndex = 0;
    int max_element = arr[LargestElementIndex];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
            LargestElementIndex = i;
        }
    }
    return arr[LargestElementIndex];
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
