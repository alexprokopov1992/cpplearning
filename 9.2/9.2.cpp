// 9.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


struct Employee
{
    short id;
    int age;
    double salary;
    void show_salary()
    {
        std::cout << "Salary: " << salary << std::endl;
    }
};


void showVal(const int val)
{
    std::cout << val << std::endl;
}

int main()
{
    int a = 1;
    unsigned int b = 2;
    int8_t a8;
    int16_t a16;
    int32_t a32;
    uint8_t ua8;
    uint16_t ua16;
    uint32_t ua32;
    bool val = true;
    char symb = 'A';
    float fval = 12.5; //	От ±1,5 x 10E−45 до ±3,4 x 10E38
    double dval = 12.5;//   от ±5,0 × 10E−324 до ±1,7 × 10E308
    long double ldval = 12.5;
    std::string stroka = "Hello";
    Employee somebody = { 1, 15, 12.5 };
    std::cout << somebody.id << " " << somebody.age << " " << somebody.salary << std::endl;
    somebody.show_salary();

    int arr1[5] = { 1,2,3,4,5 };
    int* arr2 = new int[5];

    for (int i = 0; i < 5; i++) arr2[i] = i + 1;
    for (int i = 0; i < 5; i++) std::cout << arr2[i] << " ";
    std::cout << std::endl;
    delete[] arr2;
    //for (int i = 0; i < 5; i++) std::cout << arr2[i] << " ";
    //std::cout << std::endl;

    int* dynVal = new int;
    *dynVal = 5;
    std::cout << *dynVal << std::endl;
    //delete dynVal;
    //std::cout << *dynVal << std::endl;

    int vv = 15;
    showVal(vv);
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
