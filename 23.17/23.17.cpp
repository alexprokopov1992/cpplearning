#include <cstring> // для strlen()
#include <cassert> // для assert()
#include <iostream>

class SomeString
{
private:
    char* m_data;
    size_t m_length;

public:
    SomeString(const char* source = "")
    {
        assert(source); // проверяем не является ли source нулевой строкой

        // Определяем длину source + еще один символ для нуль-терминатора (символ завершения строки)
        m_length = strlen(source) + 1;

        // Выделяем достаточно памяти для хранения копируемого значения в соответствии с длиной этого значения
        m_data = new char[m_length];

        // Копируем значение по символам в нашу выделенную память
        for (int i = 0; i < m_length; ++i)
            m_data[i] = source[i];

        // Убеждаемся, что строка завершена
        m_data[m_length - 1] = '\0';
    }

    ~SomeString() // деструктор
    {
        // Освобождаем память, выделенную для нашей строки
        delete[] m_data;
    }
    SomeString(const SomeString& source);
    SomeString& operator=(const SomeString& source);
    char* getString() { return m_data; }
    size_t getLength() { return m_length; }
};

SomeString::SomeString(const SomeString& source)
{
    // Поскольку m_length не является указателем, то мы можем выполнить поверхностное копирование
    m_length = source.m_length;

    // m_data является указателем, поэтому нам нужно выполнить глубокое копирование, при условии, что этот указатель не является нулевым
    if (source.m_data)
    {
        // Выделяем память для нашей копии
        m_data = new char[m_length];

        // Выполняем копирование
        for (int i = 0; i < m_length; ++i)
            m_data[i] = source.m_data[i];
    }
    else
        m_data = 0;
}

// Оператор присваивания
SomeString& SomeString::operator=(const SomeString& source)
{
    // Проверка на самоприсваивание
    if (this == &source)
        return *this;

    // Сначала нам нужно очистить предыдущее значение m_data (члена неявного объекта)
    delete[] m_data;

    // Поскольку m_length не является указателем, то мы можем выполнить поверхностное копирование
    m_length = source.m_length;

    // m_data является указателем, поэтому нам нужно выполнить глубокое копирование, при условии, что этот указатель не является нулевым
    if (source.m_data)
    {
        // Выделяем память для нашей копии
        m_data = new char[m_length];

        // Выполняем копирование
        for (int i = 0; i < m_length; ++i)
            m_data[i] = source.m_data[i];
    }
    else
        m_data = 0;

    return *this;
}

int main()
{
    SomeString hello("Hello, world!");
    {
        SomeString copy = hello; // используется конструктор копирования по умолчанию
    } // объект copy является локальной переменной, которая уничтожается здесь. Деструктор удаляет значение-строку объекта copy, оставляя, таким образом, hello с висячим указателем

    std::cout << hello.getString() << '\n'; // здесь неопределенные результаты

    return 0;
}