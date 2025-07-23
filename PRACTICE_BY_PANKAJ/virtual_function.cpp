#include <iostream>
using namespace std;
class A
{
public:
    void f()
    {
        cout << "f of base" << endl;
    }
    virtual void g()
    {
        cout << "g of base" << endl;
    }
    virtual void h()
    {
        cout << "h of base" << endl;
    }
    void i()
    {
        cout << "i of base" << endl;
    }
};
class B : public A
{
public:
    void f()
    {
        cout << "f of derived" << endl;
    }
    void g()
    {
        cout << "g of derived" << endl;
    }
    void j()
    {
        cout << "j of derived" << endl;
    }
};
int main()
{
    A *ptr = new A;
    ptr->f(); // Early Binding f of Base
    ptr->g(); // Late binding g of Base
    ptr->h(); // Late Binding h of Base
    ptr->i(); // Early Binding i of Base
    delete ptr;
    ptr = new B;
    ptr->f();
    ptr->g();
    ptr->h();
    ptr->i();
    ptr->j();
    return 0;
}