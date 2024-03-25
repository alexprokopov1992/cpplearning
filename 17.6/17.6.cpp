#include <iostream>

class Anything
{
public:
    static int s_value; // объявляем статическую переменную-член
};

int Anything::s_value = 3; // определяем статическую переменную-член

int main()
{
    // Примечание: Мы не создаем здесь никаких объектов класса Anything

    Anything::s_value = 4;
    std::cout << Anything::s_value << '\n';
    return 0;
}