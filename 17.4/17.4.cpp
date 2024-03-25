#include <iostream>

class Date
{
private:
    int m_day;
    int m_month;
    int m_year;

public:
    Date(int day, int month, int year)
    {
        setDate(day, month, year);
    }

    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    int getDay() const { return m_day; }
    int getMonth() const { return m_month; }
    int getYear() const { return m_year; }
};

// Примечание: Мы передаем объект date по константной ссылке, дабы избежать создания копии объекта date
void printDate(const Date& date)
{
    std::cout << date.getDay() << "." << date.getMonth() << "." << date.getYear() << '\n';
}

int main()
{
    Date date(12, 11, 2018);
    printDate(date);

    return 0;
}