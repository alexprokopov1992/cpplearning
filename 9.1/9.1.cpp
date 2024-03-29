﻿// 9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    std::vector<int> vec = {1,8,3,4,13,6,7,13,9,15};
    std::cout << vec.size() << std::endl;
    vec.push_back(11);
    std::cout << vec.size() << std::endl;
    for (auto el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    //std::cout << vec[5] << std::endl;
    vec.insert(vec.begin()+3, 12);
    for (auto el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    vec.erase(vec.begin() + 3);
    for (auto el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    sort(vec.begin(), vec.end());
    for (auto el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> stroki = { "adcc", "abcc", "aaac", "aaaa" };
    sort(stroki.begin(), stroki.end());
    for (auto el : stroki)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    std::vector<int> v{ 3, 1, -4, 1, 5, 9 };
    std::vector<int>::iterator result = std::min_element(v.begin(), v.end());
    std::cout << "min element has value " << *result << " and index [" << std::distance(v.begin(), result) << "]\n";

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
