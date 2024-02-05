// 4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    short id;
    int age;
    string fName;
    string lName;
    double salary;
};

string printWorkerInfo(Employee worker)
{
    string workerInfo = "";
    workerInfo += "ID: " + to_string(worker.id) + '\n';
    workerInfo += "AGE: " + to_string(worker.age) + '\n';
    workerInfo += "First name: " + worker.fName + '\n';
    workerInfo += "Last name: " + worker.lName + '\n';
    workerInfo += "Salary: " + to_string(worker.salary) + "\n\n";
    return workerInfo;
}

int main()
{
    Employee worker1;

    worker1.id = 1;
    worker1.age = 125;
    worker1.fName = "Vasilij";
    worker1.lName = "Petrovich";
    worker1.salary = 10100.50;

    Employee worker2;

    worker2.id = 2;
    worker2.age = 127;
    worker2.fName = "Petr";
    worker2.lName = "Petrovich";
    worker2.salary = 100.50;

    cout << printWorkerInfo(worker1) + printWorkerInfo(worker2);

    Employee worker3 = {3, 35, "Ivan", "Petrovich", 2000};

    cout << printWorkerInfo(worker3);
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
