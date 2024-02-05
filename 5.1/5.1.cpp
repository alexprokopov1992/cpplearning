// 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct Employee
{
    short id;
    int age;
    string fName;
    string lName;
    double salary;
};

string printWorkersInfo(Employee worker[], int size)
{
    string workerInfo = "";
    workerInfo += "ID: " + to_string(worker.id) + '\n';
    workerInfo += "AGE: " + to_string(worker.age) + '\n';
    workerInfo += "First name: " + worker.fName + '\n';
    workerInfo += "Last name: " + worker.lName + '\n';
    workerInfo += "Salary: " + to_string(worker.salary) + "\n\n";
    return workerInfo;
}

void printElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[5] = {1,2,3,4,5};
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(array) << endl;
    cout << "______________\n";
    printElements(array, sizeof(array) / sizeof(array[0]));
    array[3] = 186;
    printElements(array, sizeof(array) / sizeof(array[0]));

    Employee employes[3] = {{1, 35, "Ivan", "Petrovich", 2000} , {2, 35, "Ivan", "Petrovich", 2000}, {3, 35, "Ivan", "Petrovich", 2000} };
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
