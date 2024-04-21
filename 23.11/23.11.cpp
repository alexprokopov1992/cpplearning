#include <iostream>

class IntArray
{
private:
    int m_array[10];

public:
    int& operator[] (const int index);
};

int& IntArray::operator[] (const int index)
{
    return m_array[index];
}

int main()
{
	IntArray array;
	array[4] = 5; // присваиваем значение
	std::cout << array[4]; // выводим значение

	return 0;
}