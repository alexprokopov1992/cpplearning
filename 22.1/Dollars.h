class Dollars
{
private:
	int m_dollars;

public:
	Dollars(int dollars) { m_dollars = dollars; }

	int getDollars() const { return m_dollars; }
};

// ��������� �������� operator+(), ����� ����� ����������� ������������ ������������� �������� + � ������ ������
Dollars operator+(const Dollars& d1, const Dollars& d2);