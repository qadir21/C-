/*#include<iostream>
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
class B: public A
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
    A a;
    B b;
    a = b;
    return 0;
}*/
/*#include <iostream>
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
    return 0; 
}*/
/*f of base
g of base
h of base
i of base*/
/*#include <iostream>
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
    // ptr->j();
    return 0;
}*/
/*f of base
g of base
h of base
i of base
f of base
g of derived
h of base
i of base*/
/*#include<iostream> 
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
class B : private A
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
    // ptr->j();
    return 0;
}*/
/*cannot cast 'B' to its private base class 'A'
  205 |     ptr = new B;
      |           ^
virtual.cpp:181:11: note: declared private here
  181 | class B : private A
      |           ^~~~~~~~~
1 error generated.*/
/*#include <iostream>
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
}*/
/*no member named 'j' in 'A'
  271 |     ptr->j();
      |     ~~~  ^
1 error generated.*/
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