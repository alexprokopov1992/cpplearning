// hw4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
Задание №1
У вас есть веб - сайт и вы хотите отслеживать, сколько денег вы зарабатываете в день от размещенной на нем рекламы.Объявите структуру Advertising, 

которая будет отслеживать :

сколько объявлений вы показали посетителям(1);

сколько процентов посетителей нажали на объявления(2);

сколько вы заработали в среднем за каждое нажатие на объявления(3).

Значения этих трех полей должен вводить пользователь.Передайте структуру Advertising в функцию, которая выведет каждое из этих значений,
а затем подсчитает, сколько всего денег вы заработали за день(перемножьте все 3 поля).
*/

//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;

struct Advertising
{
    int adsShown;
    float clickThroughRatePercentage;
    float averageEarningsPerClick;
};


float paymentInfo(Advertising info)
{
    printf("Ads shown %d times\nclick through rate: %f\nearnings per click: %f USD\n", info.adsShown, info.clickThroughRatePercentage, info.averageEarningsPerClick);
    return info.adsShown * info.clickThroughRatePercentage * info.averageEarningsPerClick;
}

int main()
{
    Advertising adsInfo;
    printf("Input ads shown count: ");
    scanf("%d", &adsInfo.adsShown);
    printf("Input click Through Rate Percentage: ");
    scanf("%f", &adsInfo.clickThroughRatePercentage);
    printf("Input average Earnings Per Click: ");
    scanf("%f", &adsInfo.averageEarningsPerClick);
    printf("Total income: %f", paymentInfo(adsInfo));

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
