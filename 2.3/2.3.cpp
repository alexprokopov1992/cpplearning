// 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    ////if else
    //int a = 12;
    //int b = 17;
    //if (a > b)
    //{
    //    cout << "A > B";
    //}
    //else {
    //    cout << "A <= B";
    //}

    //if (a > b) cout << "A > B"; 
    //else cout << "A <= B";

    //if (1)
    //{
    //    cout << endl << "123";
    //}

    ////for
    //int counter = 0;
    //for (int i = 0; i < 10; i++)
    //{
    //    if (i == 3) continue; //пропустить все что ниже для i == 3
    //    counter++;
    //    if (i == 5) break; //позволяет выйти из цикла
    //}
    //cout << counter << endl;
    //float arr[10] = { 1.5,2,3,4,5,6,7,8,9,0 };
    //for (auto el : arr)
    //{
    //    cout << el << " ";
    //}
    //cout << endl;

    ////while do
    //int i = 0;
    //while (i < 10)
    //{
    //    cout << i++ << " ";
    //}
    //cout << endl;
    ////Цикл может и не выполнится ни разу, если условие изначально false
    //while (true)
    //{
    //    cout << "Угадайте число: ";
    //    int chislo;
    //    cin >> chislo;
    //    if (chislo == 8)
    //    {
    //        cout << "Вы угадали число!";
    //        break;
    //    }
    //}
    ////как минимум одно выполнение блока do
    //int chislo;
    //do {
    //    cout << "Угадайте число: ";
    //    cin >> chislo;
    //} while (chislo != 11);
    //cout << "Вы угадали число!";


    //switch case аналог elif
    char inputChar;
    cout << "Введите цифру: ";
    cin >> inputChar;
    switch (inputChar)
    {
        case '0':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '1':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '2':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '3':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '4':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '5':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '6':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '7':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '8':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        case '9':
            cout << endl << "Вы ввели " << inputChar;
            inputChar++;
            break;
        default: //аналог else в конце elif
            cout << endl << "Вы ввели не цифру! " << inputChar;
            break;
    }
    cout << endl << inputChar << endl;
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
