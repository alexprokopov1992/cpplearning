﻿// 8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void printSize(int* array)
{
    // Здесь массив рассматривается как указатель 
    std::cout << sizeof(array) << '\n'; // выведется размер указателя, а не длина массива!
}

int main()
{
    /*int* ptr(0);
    int* ptr1;
    int* ptr2(NULL);
    ptr1 = 0;
    int val = 3;
    ptr = &val;
    cout << *ptr;
    *ptr = 8;
    cout << val;*/

    int array[4] = { 5, 8, 6, 4 };
    std::cout << "The array has address: " << array << '\n';
    std::cout << "Element 0 has address: " << &array[0] << '\n';
    std::cout << "address: " << &array+2 << '\n';
    std::cout << *array << '\n';
    std::cout << *(array + 8) << '\n';
    std::cout << array[8] << '\n';

    //int array[] = { 1, 2, 3, 4, 4, 9, 15, 25 };
    //std::cout << sizeof(array) << '\n'; // выведется sizeof(int) * длина массива

    //printSize(array); // здесь аргумент array распадается на указатель

    //return 0;
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
