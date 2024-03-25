#include <iostream>



class Fruit
{
public:
	struct Storage {
		int count;
		double price;
	};

	enum FruitList
	{
		AVOCADO,
		BLACKBERRY,
		LEMON
	};

private:
	FruitList m_type;
	Storage m_store;

public:
	Fruit(FruitList type) :
		m_type(type)
	{
	}

	FruitList getType() { return m_type; }
};

int main()
{
	Fruit avocado(Fruit::AVOCADO);

	Fruit::Storage store = { 1, 15 };

	std::cout << store.price << std::endl;

	if (avocado.getType() == Fruit::AVOCADO)
		std::cout << "I am an avocado!";
	else
		std::cout << "I am not an avocado!";

	return 0;
}