﻿#include <iostream>
#include <array>
#include <ctime> // для time()
#include <cstdlib> // для rand() и srand()
#include <cassert>


class Card
{
public:
	enum CardSuit
	{
		SUIT_CLUB,
		SUIT_DIAMOND,
		SUIT_HEART,
		SUIT_SPADE,
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
		RANK_JACK,
		RANK_QUEEN,
		RANK_KING,
		RANK_ACE,
		MAX_RANKS
	};

private:
	CardRank m_rank;
	CardSuit m_suit;

public:
	Card(CardRank rank = MAX_RANKS, CardSuit suit = MAX_SUITS) : m_rank(rank), m_suit(suit) {}

	void printCard() const
	{
		switch (m_rank)
		{
			case RANK_2:		std::cout << '2'; break;
			case RANK_3:		std::cout << '3'; break;
			case RANK_4:		std::cout << '4'; break;
			case RANK_5:		std::cout << '5'; break;
			case RANK_6:		std::cout << '6'; break;
			case RANK_7:		std::cout << '7'; break;
			case RANK_8:		std::cout << '8'; break;
			case RANK_9:		std::cout << '9'; break;
			case RANK_10:		std::cout << 'T'; break;
			case RANK_JACK:		std::cout << 'J'; break;
			case RANK_QUEEN:	std::cout << 'Q'; break;
			case RANK_KING:		std::cout << 'K'; break;
			case RANK_ACE:		std::cout << 'A'; break;
		}

		switch (m_suit)
		{
			case SUIT_CLUB:		std::cout << 'C'; break;
			case SUIT_DIAMOND:	std::cout << 'D'; break;
			case SUIT_HEART:	std::cout << 'H'; break;
			case SUIT_SPADE:	std::cout << 'S'; break;
		}
	}

	int getCardValue() const
	{
		switch (m_rank)
		{
			case RANK_2:		return 2;
			case RANK_3:		return 3;
			case RANK_4:		return 4;
			case RANK_5:		return 5;
			case RANK_6:		return 6;
			case RANK_7:		return 7;
			case RANK_8:		return 8;
			case RANK_9:		return 9;
			case RANK_10:		return 10;
			case RANK_JACK:		return 10;
			case RANK_QUEEN:	return 10;
			case RANK_KING:		return 10;
			case RANK_ACE:		return 11;
		}

		return 0;
	}
};

class Deck
{
private:
	std::array<Card, 52> m_deck;
	uint8_t m_cardIndex = 0;
public:
	Deck()
	{
		int card_num = 0;
		for (int suit = 0; suit < Card::MAX_SUITS; suit++)
		{
			for (int rank = 0; rank < Card::MAX_RANKS; rank++)
			{
				m_deck[card_num++] = Card(static_cast<Card::CardRank>(rank), static_cast<Card::CardSuit>(suit));
			}
		}
	}

	void printDeck() const
	{
		for (const auto& card : m_deck)
		{
			card.printCard();
			std::cout << ' ';
		}

		std::cout << '\n';
	}

	void shuffleDeck()
	{
		m_cardIndex = 0;
		for (int index = 0; index < 52; ++index)
		{
			int swapIndex = getRandomNumber(0, 51);
			swapCard(m_deck[index], m_deck[swapIndex]);
		}
	}
	//Во - вторых, создайте открытый метод dealCard(), который будет возвращать константную ссылку на текущую карту и увеличивать m_cardIndex.
	const Card& dealCard()
	{
		assert(m_cardIndex < 52);
		return m_deck[m_cardIndex++];
	}

private:
	static void swapCard(Card& a, Card& b)
	{
		Card temp = a;
		a = b;
		b = temp;
	}

	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}

};


char getPlayerChoice()
{
	std::cout << "Take one more card? ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'y' && choice != 'n');

	return choice;
}

char RestartGameChoise()
{
	std::cout << "Play again? ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'y' && choice != 'n');

	return choice;
}

bool playBlackjack()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();
	Deck deck;
	deck.shuffleDeck();

	int player_score = deck.dealCard().getCardValue();
	player_score += deck.dealCard().getCardValue();
	int dealer_score = deck.dealCard().getCardValue();
	std::cout << "Dealer have " << dealer_score << " now.\n";
	std::cout << "You have " << player_score << " now.\n";
	while (true)
	{
		char choise = getPlayerChoice();
		if (choise == 'n')
		{
			break;
		}
		player_score += deck.dealCard().getCardValue();
		std::cout << "You have " << player_score << " now.\n";
		if (player_score > 21) return false;
	}

	while (dealer_score < 17 )
	{
		dealer_score += deck.dealCard().getCardValue();
		std::cout << "Dealer have " << dealer_score << " now.\n";
		if (dealer_score > 21) return true;
	}

	return (player_score > dealer_score);

}


int main()
{
	char ch;
	do {
		if (playBlackjack())
		{
			std::cout << "You win!\n";
		}
		else {
			std::cout << "Dealer win!\n";
		}
		ch = RestartGameChoise();
	} while (ch != 'n');
	
	return 0;
}