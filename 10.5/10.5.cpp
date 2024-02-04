#include <iostream>
#include <array>

#include <ctime>
#include <cstdlib>

//Предположим, что мы хотим написать карточную игру.
//
//a) В колоде карт находятся 52 уникальные карты : 
//13 достоинств(2, 3, 4, 5, 6, 7, 8, 9, 10, Валет, Дама, Король, Туз) и 
//4 масти(трефы, бубны, червы, пики).Создайте два перечисления : 
//первое для масти, второе для достоинств карт.
//
//Подсказка : Добавьте в каждое перечисление еще по одному элементу,
//который будет обозначать длину этого перечисления.

enum CardSuit
{
	SUIT_TREFU,
	SUIT_BYBNU,
	SUIT_CHERVU,
	SUIT_PIKI,
	MAX_SUITS
};

enum CardRank
{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_VALET,
	RANK_DAMA,
	RANK_KOROL,
	RANK_TYZ,
	MAX_RANKS
};

struct Card
{
	CardRank rank;
	CardSuit suit;
};

void printCard(const Card& card);
void printDeck(const std::array<Card, 52>&);
void swapCard(Card&, Card&);
int getRandomNumber(int, int);
void shuffleDeck(std::array<Card, 52>&);

int getRandomNumberTest(int min, int max)
{
	//std::cout << std::endl << std::endl << std::endl;
	//std::cout << RAND_MAX << std::endl;
	//std::cout << static_cast<double>(RAND_MAX) << std::endl;
	//static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	//std::cout << fraction << std::endl;
	//int rand_val = rand();
	//int diapazon = max - min + 1;
	//int rezult = rand_val % diapazon + min;
	return static_cast<int>(rand()) % (max - min + 1) + min;
}

int main()
{
	srand(static_cast<unsigned int>(time(0))); // устанавливаем значение системных часов в качестве стартового числа
	rand(); // если используете Visual Studio, сбрасываем первое сгенерированное рандомное число

	std::array<Card, 52> deck;

	// Можно было бы вручную (по отдельности) инициализировать каждую карту, но мы ведь программисты! Цикл нам в помощь!
	int card = 0;
	for (int suit = 0; suit < MAX_SUITS; ++suit)
		for (int rank = 0; rank < MAX_RANKS; ++rank)
		{
			deck[card].suit = static_cast<CardSuit>(suit);
			deck[card].rank = static_cast<CardRank>(rank);
			++card;
		}

	printDeck(deck);

	shuffleDeck(deck);

	printDeck(deck);

	getRandomNumberTest(0, 51);
	getRandomNumberTest(0, 51);
	getRandomNumberTest(0, 51);
	return 0;
}

void printDeck(const std::array<Card, 52>& deck)
{
	for (const auto& card : deck)
	{
		printCard(card);
		std::cout << ' ';
	}

	std::cout << '\n';
}

void swapCard(Card& a, Card& b)
{
	Card temp = a;
	a = b;
	b = temp;
}

void printCard(const Card& card)
{
	switch (card.rank)
	{
		case RANK_2:		std::cout << "2"; break;
		case RANK_3:		std::cout << "3"; break;
		case RANK_4:		std::cout << "4"; break;
		case RANK_5:		std::cout << "5"; break;
		case RANK_6:		std::cout << "6"; break;
		case RANK_7:		std::cout << "7"; break;
		case RANK_8:		std::cout << "8"; break;
		case RANK_9:		std::cout << "9"; break;
		case RANK_10:		std::cout << "T"; break;
		case RANK_VALET:	std::cout << "V"; break;
		case RANK_DAMA:	    std::cout << "D"; break;
		case RANK_KOROL:	std::cout << "K"; break;
		case RANK_TYZ:		std::cout << "T"; break;
	}
	switch (card.suit)
	{
		case SUIT_TREFU:	std::cout << "TR"; break;
		case SUIT_BYBNU:	std::cout << "B"; break;
		case SUIT_CHERVU:	std::cout << "CH"; break;
		case SUIT_PIKI:	    std::cout << "P"; break;
	}
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем генерацию случайного числа в диапазоне значений
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card, 52>& deck)
{
	// Перебираем каждую карту в колоде
	for (int index = 0; index < 52; ++index)
	{
		// Выбираем любую случайную карту
		int swapIndex = getRandomNumberTest(0, 51);
		// Меняем местами с нашей текущей картой
		swapCard(deck[index], deck[swapIndex]);
	}
}