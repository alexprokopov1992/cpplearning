#include <iostream>

class Parent
{
public:
    int m_id;

    Parent(int id = 0)
        : m_id(id)
    {

    }

    int getId() const { return m_id; }
};

class Child : public Parent
{
public:
    double m_value;

    Child(double value = 0.0, int id = 0) : Parent(id), m_value(value)
    {
    }

    double getValue() const { return m_value; }
};

int main()
{
    Child child(1.5, 7); // вызывается конструктор Child(double, int)
    std::cout << "ID: " << child.getId() << '\n';
    std::cout << "Value: " << child.getValue() << '\n';

    return 0;
}