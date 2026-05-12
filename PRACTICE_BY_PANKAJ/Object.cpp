/*#include<iostream>
using namespace std;
class Base  //For function overloading all the overloded function definations must be in same scope.
{
    public:
            void fun()
            {
                cout << "Base class." << endl;
            }
            void fun1()
            {
                cout << "1" << endl;
            }
};
class Derived: public Base
{
    public:
            void fun()
            {
                cout << "Derived class." << endl;
            }
            void fun1(int a)
            {
                cout << "2" << endl;
            }
};
int main()
{
    Derived d;
    d.fun();
    d.fun1();
    return 0;
}*/
/*too few arguments to function call, expected 1, have 0;
did you mean 'Base::fun1' ? 64 | d.fun1();
| ^~~~ | Base::fun1 Object.cpp : 43 : 10 : note : 'Base::fun1' declared here 43 | void fun1() | ^1 error generated.*/
/*#include <iostream>
using namespace std;
class Base // For function overloading all the overloded function definations must be in same scope.
{
public:
    void fun()
    {
        cout << "Base class." << endl;
    }
    void fun1()
    {
        cout << "1" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Derived class." << endl;
    }
    void fun1(int a)
    {
        cout << "2" << endl;
    }
};
int main()
{
    Derived d;
    d.fun();
    d.fun1(23);
    return 0;
}*/
// Derived class.
//2
/*#include <iostream>
using namespace std;
class Base // For function overloading all the overloded function definations must be in same scope.
{
public:
    void fun()
    {
        cout << "Base class." << endl;
    }
    void fun1()
    {
        cout << "1" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Derived class." << endl;
    }
    void fun1()
    {
        cout << "2" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    Base *pb = &b;
    Base *pd = &d;
    b.fun();
    d.fun();
    b.fun1();
    d.fun1();
    return 0;
}*/
/*Base class.
Derived class.
1
2*/
/*#include <iostream>
using namespace std;
class Base // For function overloading all the overloded function definations must be in same scope.
{
public:
    void fun()
    {
        cout << "Base class." << endl;
    }
    void fun1()
    {
        cout << "1" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Derived class." << endl;
    }
    void fun1()
    {
        cout << "2" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    Base *pb = &b;
    Base *pd = &d;
    pb->fun();
    pd->fun();
    pb->fun1();
    pd->fun1();
    return 0;
}*/
/*Base class.
Base class.
1
1*/
/*#include <iostream>
using namespace std;
class Base // For function overloading all the overloded function definations must be in same scope.
{
public:
    void fun()
    {
        cout << "Base class." << endl;
    }
    virtual void fun1()
    {
        cout << "1" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Derived class." << endl;
    }
    virtual void fun1()
    {
        cout << "2" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    Base *pb = &b;
    Base *pd = &d;
    pb->fun();
    pd->fun();
    pb->fun1();
    pd->fun1();
    return 0;
}*/
/*Base class.
Base class.
1
2*/
#include <iostream>
using namespace std;
class Base // For function overloading all the overloded function definations must be in same scope.
{
public:
    void fun()
    {
        cout << "Base class." << endl;
    }
    virtual void fun1()
    {
        cout << "1" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Derived class." << endl;
    }
    void fun1()
    {
        cout << "2" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    Base *pb = &b;
    Base *pd = &d;
    pb->fun();
    pd->fun();
    pb->fun1();
    pd->fun1();
    return 0;
}