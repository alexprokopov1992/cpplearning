#include <string>
#include <iostream>

class Human
{
public:
    std::string m_name;
    int m_age;

    Human(std::string name = "", int age = 0)
        : m_name(name), m_age(age)
    {
    }

    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }

};

class BasketballPlayer : public Human
{
public:
    double m_gameAverage;
    int m_points;

    BasketballPlayer(double gameAverage = 0.0, int points = 0)
        : m_gameAverage(gameAverage), m_points(points)
    {
    }
};

class Employee : public Human
{
public:
    int m_wage;
    long m_employeeID;

    Employee(int wage = 0, long employeeID = 0)
        : m_wage(wage), m_employeeID(employeeID)
    {
    }

    void printNameAndWage() const
    {
        std::cout << m_name << ": " << m_wage << '\n';
    }
};


class Supervisor : public Employee
{
public:
    // Этот Супервайзер может наблюдать максимум за 5-тью Работниками
    long m_nOverseesIDs[5];

    Supervisor()
    {
    }

};

int main()
{
    // Создаем нового Баскетболиста
    BasketballPlayer anton;
    // Присваиваем ему имя (мы можем делать это напрямую, так как m_name является public)
    anton.m_name = "Anton";
    // Выводим имя Баскетболиста
    std::cout << anton.getName() << '\n'; // используем метод getName(), который мы унаследовали от класса Human

    Employee ivan(350, 787);
    ivan.m_name = "Ivan"; // мы можем это сделать, так как m_name является public

    ivan.printNameAndWage();

    return 0;
}