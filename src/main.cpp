#include <iostream>
#include <string>

class A
{
  private:
    std::string m_Status;

  public:
    A()
    {
        std::cout << "created A\n";
    }

    virtual ~A()
    {
        std::cout << "destroyed A\n";
    }

    void SetStatus(std::string status)
    {
        m_Status = status;
    }

    std::string GetStatus()
    {
        return m_Status;
    }
};

class B : public A
{
  public:
    B()
    {
        std::cout << "created B\n";
    }
    ~B()
    {
        std::cout << "destroyed B\n";
    }
};

class Printable {
    virtual void DrawMe() = 0;
};

class Moveable {
    virtual void Move() = 0;
};

class Shape : public Printable, public Moveable {

};

class Square : public Shape {

};

int main()
{
    A* a_ptr = new A();
    a_ptr->SetStatus("abc");

    A* b_ptr = new B();
    b_ptr->SetStatus("def");

    std::cout << a_ptr->GetStatus() << '\n';
    std::cout << b_ptr->GetStatus() << '\n';

    delete a_ptr;
    delete b_ptr;

    Square square;
}
