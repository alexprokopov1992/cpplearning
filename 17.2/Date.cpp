#include "Date.h"

// Конструктор класса Date
Date::Date(int day, int month, int year)
{
    SetDate(day, month, year);
}

// Метод класса Date
void Date::SetDate(int day, int month, int year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}