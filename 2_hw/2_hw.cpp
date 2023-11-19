// 2_hw.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

//test

using namespace std;

//Функция которая определяет четное ли число, и возвращает true если четное, false - если нечетное 
bool isEven(int number)
{
    return (number % 2 == 0);
}

//Написать функцию, которая будет искать суму всех цифр числа
int sumOfDigits(uint32_t number)
{
    int summ = 0;
    while (number>0)
    {
        summ += number % 10;
        number /= 10;
    }
    return summ;
}

//Даны координаты точки на координатной плоскости x1, y1, x2, y2.Разработать функцию Length(), которая вычисляет длину отрезка образованного этими точками.
//для нахождения корня из числа используется функция sqrt(число), пример в main()
double lengthOfLine(int x1, int y1, int x2, int y2)
{
    double result = 0;
    result = sqrt(pow((x1 - x2),2) + pow((y1 - y2), 2));
    return result;
}

//функция которая принимает строку и символ и считает сколько раз это символ встречается в строке
//для считывания строки использовать функцию getline(cin, str), пример использования в main()
int numOfCharInString(string str, char symb)
{
    /*int schetchik = 0;
    for (char letter : str)
    {
        if (letter == symb) schetchik++;
    }

    return schetchik;*/
    int counter = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == symb) counter++;
    }
    return counter;
}


int main()
{
    //test
    //string str;
    //getline(cin, str);
    //cout << str << endl;
    //std::cout << sqrt(3);
    //cout << isEven(15) << endl;
    //cout << isEven(20) << endl;
    //uint32_t number;
    //cin >> number;
   // cout << sumOfDigits(number);
   // cout << pow(2, 0.5) << endl;
   // cout << lengthOfLine(0, 0, 5, 5);
    cout << numOfCharInString("text", 't');
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
