// 6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void sortArrayAscending(int [], size_t);
void sum_of_two(int& a, int& b)
{
    cout << a + b << endl;
    a += 1;
    b += 1;
}


int main()
{
    //int arr[5] = {1,2,3,4,5};
    //int arr2[10][11] = { {1,2,3,4,5,6,7,8,9,0,1},
    //                     {1,2,3,4,5,6,7,8,9,0,2},
    //                     {1,2,3,4,5,6,7,8,9,0,3},
    //                     {1,2,3,4,5,6,7,8,9,0,4},
    //                     {1,2,3,4,5,6,7,8,9,0,5},
    //                     {1,2,3,4,5,6,7,8,9,0,6},
    //                     {1,2,3,4,5,6,7,8,9,0,7},
    //                     {1,2,3,4,5,6,7,8,9,0,8},
    //                     {1,2,3,4,5,6,7,8,9,0,9},
    //                     {1,2,3,4,5,6,7,8,9,0,0}
    //                   };
    //
    //int rows = sizeof(arr2) / sizeof(arr2[0]);
    //int columns = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    //for (int row = 0; row < rows; row++)
    //{
    //    //for (int col = 0; col < columns; col++)
    //    //{
    //    //    cout << arr2[row][col] << " ";
    //    //}
    //    for (auto el : arr2[row])
    //    {
    //        cout << el << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    int arr[10] = { 34, 65, 17, 9, 150, 170, 18, 23, 12, 3 };
    sortArrayAscending(arr, sizeof(arr) / sizeof(arr[0]));
    for (auto el : arr)
    {
        cout << el << " ";
    }
    cout<<endl;

    int v1 = 3;
    int v2 = 5;
    sum_of_two(v1, v2);
    cout << v1 << " " << v2 << endl;
}

void sortArrayAscending(int arr[], size_t arrSize)
{

    for (int i = 0; i < arrSize - 1; i++)
    {
        int minElement = arr[i];
        int minElementIndex = i;
        for (int k = i + 1; k < arrSize; k++)
        {
            if (minElement > arr[k])
            {
                minElement = arr[k];
                minElementIndex = k;
            }
        }
        if (minElementIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minElementIndex];
            arr[minElementIndex] = temp;
        }
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
