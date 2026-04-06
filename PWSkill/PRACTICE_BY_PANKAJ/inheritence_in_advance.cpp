/*#include<iostream>
using namespace std;
class A
{
    private:
            int a;
    public:
            void fun()
            {
                cout << "Base class." << endl;
            }        
};
class B: public A
{
    private:
            int b;
    public:
            void fun()
            {
                cout << "Derived class." << endl;
            }
};
int main()
{
    B b;
    A a;
    b.fun();
    a.fun();
    return 0;
}*/
//Derived class.
//Base class.
/*#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    void fun()
    {
        cout << "Base class." << endl;
    }
};
class B : public A
{
private:
    int b;
};
int main()
{
    B b;
    A a;
    b.fun();
    a.fun();
    return 0;
}*/
// Base class.
//Base class
/*#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    void fun()
    {
        cout << "Base class." << endl;
    }
};
class B : public A
{
private:
    int b;
public:
        void fun()
        {
            cout << "Derived class." << endl;
        }
        void fun(int n)
        {
            cout << "Derived class with parameter: " << n << endl;
        }
        void fun(double m)
        {
            cout << "Derived class with parameter: " << m << endl;
        }
};
int main()
{
    B b;
    A a;
    b.fun();
    a.fun();
    return 0;
}*/
// Derived class.
// Base class.
/*#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    void fun()
    {
        cout << "Base class." << endl;
    }
};
class B : public A
{
private:
    int b;

public:
    void fun(int n)
    {
        cout << "Derived class with parameter: " << n << endl;
    }
    void fun(double m)
    {
        cout << "Derived class with parameter: " << m << endl;
    }
};
int main()
{
    B b;
    A a;
    b.fun();
    a.fun();
    return 0;
}*/
/* no matching member function for call to 'fun'
  134 |     b.fun();
      |     ~~^~~
inheritence_in_advance.cpp:121:10: note: candidate function not viable: requires single argument 'n', but no arguments were provided
  121 |     void fun(int n)
      |          ^   ~~~~~
inheritence_in_advance.cpp:125:10: note: candidate function not viable: requires single argument 'm', but no arguments were provided
  125 |     void fun(double m)
      |          ^   ~~~~~~~~
1 error generated.*/