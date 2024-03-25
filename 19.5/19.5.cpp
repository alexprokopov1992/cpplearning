//Давайте создадим генератор случайных монстров.
//
//a) Сначала создайте перечисление MonsterType со следующими типами монстров :
//Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire и Zombie + добавьте MAX_MONSTER_TYPES, 
//чтобы иметь возможность подсчитать общее количество всех перечислителей.

//b) Теперь создайте класс Monster со следующими тремя атрибутами(переменными - членами) :
//тип(MonsterType), имя(std::string) и количество здоровья(int).

//c) Перечисление MonsterType является специфичным для Monster, поэтому переместите его внутрь класса под спецификатор доступа public.

//d) Создайте конструктор, который позволит инициализировать все переменные - члены класса.
//
//Следующий фрагмент кода должен скомпилироваться без ошибок :
//int main()
//{
//	Monster jack(Monster::Orc, "Jack", 90);
//
//	return 0;
//}

//e) Теперь нам нужно вывести информацию про нашего монстра.Для этого нужно конвертировать MonsterType в std::string.Добавьте функцию getTypeString(), которая будет выполнять конвертацию, и функцию вывода print().
//Следующая программа :
//
//int main()
//{
//	Monster jack(Monster::Orc, "Jack", 90);
//	jack.print();
//
//	return 0;
//}
//Должна выдавать следующий результат :
//
//Jack is the orc that has 90 health points.




#include <iostream>
#include <string>

class Monster
{
public:
	enum MonsterType
	{
		Dragon,
		Goblin,
		Ogre,
		Orc,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MAX_MONSTER_TYPES
	};
private:
	MonsterType m_type;
	std::string m_name;
	int m_hp;
public:
	Monster(MonsterType type, std::string name, int health): m_type(type), m_name(name), m_hp(health) {}
	std::string getTypeString(MonsterType type) const
	{
		switch (m_type)
		{
			case Dragon: return "dragon";
			case Goblin: return "goblin";
			case Ogre: return "ogre";
			case Orc: return "orc";
			case Skeleton: return "skeleton";
			case Troll: return "troll";
			case Vampire: return "vampire";
			case Zombie: return "zombie";
			default: return "Unknown";
		}
	}
	void print() const
	{
		std::cout << m_name << " is the " << getTypeString(m_type) << " that has " << m_hp << " health points.\n";
	}
};

//f) Теперь мы уже можем создать сам генератор монстров.
//Для этого создайте статический класс MonsterGenerator и статический метод с именем generateMonster(), 
//который будет возвращать случайного монстра.Пока что возвратом метода пускай будет анонимный объект :
//(Monster::Orc, "Jack", 90).
//Должна выдавать следующий результат :
//
//Jack is the orc that has 90 health points.

class MonsterGenerator
{
public:
	static Monster generateMonster()
	{
		return Monster(Monster::Orc, "Jack", 90);
	}
};


int main()
{
	Monster m = MonsterGenerator::generateMonster();
	m.print();

	return 0;
}