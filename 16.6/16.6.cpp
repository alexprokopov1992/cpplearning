#include <iostream>
#include <cassert>

class Massiv
{
private:
	int* m_array;
	int m_length;

public:
	Massiv(int length) // конструктор
	{
		assert(length > 0);

		m_array = new int[length];
		m_length = length;
	}

	~Massiv() // деструктор
	{
		// Динамически удаляем массив, который выделили ранее
		std::cout << std::endl << "Deleting object " << std::endl;
		delete[] m_array;
	}

	void setValue(int index, int value) { m_array[index] = value; }
	int getValue(int index) { return m_array[index]; }

	int getLength() { return m_length; }
};

void doSmth()
{
	Massiv *arr = new Massiv(15); // выделяем 15 целочисленных значений
	for (int count = 0; count < 15; ++count)
		arr->setValue(count, count + 1);

	std::cout << "The value of element 7 is " << arr->getValue(7);
	delete arr;
	std::cout<< std::endl << "Function end" << std::endl;
}

int main()
{
	doSmth();
	doSmth();
	Massiv arr(15); // выделяем 15 целочисленных значений
	for (int count = 0; count < 15; ++count)
		arr.setValue(count, count + 1);

	std::cout << "The value of element 7 is " << arr.getValue(7);
	std::cout <<  std::endl << "Program end" << std::endl;
	return 0;
} // объект arr удаляется здесь, поэтому деструктор ~Massiv() вызывается тоже здесь