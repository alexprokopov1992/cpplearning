#include <string>
#include <iostream>

class Human
{
private:
    std::string m_name;
    int m_age;

public:
    Human(std::string name = "", int age = 0)
        : m_name(name), m_age(age)
    {
    }

    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }

};

//class Human
//{
//public:
//    std::string m_name;
//    int m_age;
//
//    Human(std::string name = "", int age = 0)
//        : m_name(name), m_age(age)
//    {
//    }
//
//    std::string getName() const { return m_name; }
//    int getAge() const { return m_age; }
//};
// BasketballPlayer открыто наследует класс Human
class BasketballPlayer : public Human
{
private:
    double m_gameAverage;
    int m_points;

public:
    BasketballPlayer(std::string name = "", int age = 0,
        double gameAverage = 0.0, int points = 0)
        : Human(name, age), // вызывается Human(std::string, int) для инициализации членов name и age
        m_gameAverage(gameAverage), m_points(points)
    {
    }

    double getGameAverage() const { return m_gameAverage; }
    int getPoints() const { return m_points; }
};
//class BasketballPlayer : public Human
//{
//public:
//    double m_gameAverage;
//    int m_points;
//
//    BasketballPlayer(double gameAverage = 0.0, int points = 0)
//        : m_gameAverage(gameAverage), m_points(points)
//    {
//    }
//};

int main()
{
    BasketballPlayer anton("Anton Ivanovuch", 45, 300, 310);

    std::cout << anton.getName() << '\n';
    std::cout << anton.getAge() << '\n';
    std::cout << anton.getPoints() << '\n';

    return 0;
}