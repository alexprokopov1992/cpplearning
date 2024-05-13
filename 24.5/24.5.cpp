//Спецификатор доступа в родительском классе	        Спецификатор доступа при наследовании типа public в дочернем классе
//                public	                                                      public
//                private	                                                      Недоступен
//                protected	                                                  protected


class Parent
{
    public:
        int m_public;
    private:
        int m_private;
    protected:
        int m_protected;
};

class Priv : private Parent // закрытое наследование
{
    // Закрытое наследование означает, что:
    // - public-члены становятся private (m_public теперь private) в дочернем классе;
    // - protected-члены становятся private (m_protected теперь private) в дочернем классе;
    // - private-члены остаются недоступными (m_private недоступен) в дочернем классе.
public:
    Priv()
    {
        m_public = 1; // разрешено: m_public теперь private в Priv
        m_private = 2; // запрещено: дочерние классы не имеют доступ к закрытым членам родительского класса
        m_protected = 3; // разрешено: m_protected теперь private в Priv
    }
};

int main()
{
    Parent parent;
    parent.m_public = 1; // разрешено: m_public доступен извне через родительский класс
    parent.m_private = 2; // запрещено: m_private недоступен извне через родительский класс
    parent.m_protected = 3; // запрещено: m_protected недоступен извне через родительский класс

    Priv priv;
    priv.m_public = 1; // запрещено: m_public недоступен извне через дочерний класс
    priv.m_private = 2; // запрещено: m_private недоступен извне через дочерний класс
    priv.m_protected = 3; // запрещено: m_protected недоступен извне через дочерний класс
}