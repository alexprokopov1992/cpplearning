// 14.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

//В объектно - ориентированном программировании инкапсуляция(или «сокрытие информации») — это процесс скрытого хранения деталей реализации объекта.Пользователи обращаются к объекту через открытый интерфейс.

//class Person
//{
//public:
//    Person(string fname, string sname, int age)
//    {
//        m_f_name = fname;
//        m_s_name = sname;
//        m_age = age;
//        m_count = 0;
//    }
//
//    //Сеттер
//    void setAge(int newAge)
//    {
//        m_age = newAge;
//        m_count++;
//    }
//
//    //Геттер
//    int getAge()
//    {
//        m_count++;
//        return m_age;
//    }
//
//    int getCount()
//    {
//        return m_count;
//    }
//
//private:
//    string m_f_name;
//    string m_s_name;
//    int m_age;
//    int m_count;
//
//};
//
//
//
//int main()
//{
//    Person first("peter", "petrovich", 60);
//    cout << first.getCount() << endl;
//    cout << first.getCount() << endl;
//    first.setAge(18);
//    cout << first.getCount() << endl;
//    cout << first.getAge() << endl;
//    cout << first.getCount() << endl;
//
//}


//class Values
//{
//public:
//    int m_number1;
//    int m_number2;
//    int m_number3;
//};
//
//int main()
//{
//    Values value;
//    value.m_number1 = 7;
//    std::cout << value.m_number1 << '\n';
//}

class Values
{
private:
    int m_number1;
    int m_number2;
    int m_number3;
 
public:
    void setNumber1(int number) { m_number1 = number; }
    int getNumber1() { return m_number1; }
};
 
int main()
{
    Values value;
    value.setNumber1(7);
    std::cout << value.getNumber1() << '\n';
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
