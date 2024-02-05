// 7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int string_to_number(string);

int main()
{
    string str = "Hello World!\n";
    char mystring[] = "string";
    cout << str;
    cout << mystring;
    for (int index = 0; index < sizeof(mystring); ++index)
        std::cout << static_cast<int>(mystring[index]) << " ";
    /*string input = "";
    cout << endl;
    cin >> input;
    cout << stoi(input) << endl;
    cout << string_to_number(input) << endl;
    cout << string_to_number(input) + 10;*/

    char copy_of_string[255];
    strcpy_s(copy_of_string, mystring);
    cout << copy_of_string << endl;
    cout << strcmp(copy_of_string, mystring) << endl;
    strcat_s(copy_of_string, mystring);
    cout << strcmp(copy_of_string, mystring) << endl;
    cout << strncmp(copy_of_string, mystring, 3) << endl;
    cout << copy_of_string << endl;
    

    string str1 = "123";
    string str2 = "123";
    if (str1 == str2) cout << "Equal\n";
    /*cout << strlen(copy_of_string) << endl;
    cout << sizeof(copy_of_string) << endl;
    for (int index = 0; index < sizeof(copy_of_string); ++index)
        std::cout << static_cast<int>(copy_of_string[index]) << " ";
    cout << endl;*/

}

int string_to_number(string str)
{
    int number = 0;
    int mult = 1;
    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        number += (str[i] - 48) * mult;
        mult *= 10; // mult = mult * 10;
    }
    return number;
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
