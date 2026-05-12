/*#include<iostream>
using namespace std;
class product
{
    private:
        int a, b;
    public:
        void setvalue(int x, int y)
        {
            a = x;
            b = y;
        }
        void printvalue()
        {
            cout << "Value of a: " << a << endl;
            cout << "Value of b: " << b << endl;
        }
};
int main()
{
    product p1, p2;
    p1.setvalue(10, 20);
    p1.printvalue();
    return 0;
}*/
/*Value of a: 10
Value of b: 20*/
/*#include <iostream>
using namespace std;
class product
{
private:
    int a, b;

public:
    void setvalue(int x, int y)
    {
        cout << "The address of this: " << this << endl;
        this -> a = x;
        this -> b = y;
    }
    void printvalue()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    product p1, p2;
    cout << "The address of p1: " << &p1 << endl;
    cout << "The address of p2: " << &p2 << endl;
    p1.setvalue(10, 20);
    p1.printvalue();
    return 0;
}*/
/*The address of p1: 0x16dbfb0a4
The address of p2: 0x16dbfb09c
The address of this: 0x16dbfb0a4
Value of a: 10
Value of b: 20*/
/*#include <iostream>
using namespace std;
class product
{
private:
    int a, b;

public:
    void setvalue(int x, int y)
    {
        cout << "The address of this: " << this << endl;
        *(this).a = x;
        *(this).b = y;
    }
    void printvalue()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    product p1, p2;
    cout << "The address of p1: " << &p1 << endl;
    cout << "The address of p2: " << &p2 << endl;
    p1.setvalue(10, 20);
    p1.printvalue();
    return 0;
}*/
/*This_pointer.cpp:73:16: error: member reference type 'product *' is a pointer; did you mean to use '->'?
   73 |         *(this).a = x;
      |          ~~~~~~^
      |                ->
This_pointer.cpp:73:9: error: indirection requires pointer operand ('int' invalid)
   73 |         *(this).a = x;
      |         ^~~~~~~~~
This_pointer.cpp:74:16: error: member reference type 'product *' is a pointer; did you mean to use '->'?
   74 |         *(this).b = y;
      |          ~~~~~~^
      |                ->
This_pointer.cpp:74:9: error: indirection requires pointer operand ('int' invalid)
   74 |         *(this).b = y;
      |         ^~~~~~~~~
4 errors generated.*/
/*#include <iostream>
using namespace std;
class product
{
private:
    int a, b;

public:
    void setvalue(int x, int y)
    {
        cout << "The address of this: " << this << endl;
        (*this).a = x;
        (*this).b = y;
    }
    void printvalue()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    product p1, p2;
    cout << "The address of p1: " << &p1 << endl;
    cout << "The address of p2: " << &p2 << endl;
    p1.setvalue(10, 20);
    p1.printvalue();
    return 0;
}*/
/*The address of p1: 0x16d94f0a4
The address of p2: 0x16d94f09c
The address of this: 0x16d94f0a4
Value of a: 10
Value of b: 2*/
#include <iostream>
using namespace std;
class product
{
private:
    int a, b;

public:
    void setvalue(int x, int y)
    {
        cout << "The address of this: " << this << endl;
        (*this).a = x;
        (*this).b = y;
    }
    void printvalue()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    product p1, p2;
    cout << "The address of p1: " << &p1 << endl;
    cout << "The address of p2: " << &p2 << endl;
    p1.setvalue(10, 20);
    p1.printvalue();
    return 0;
}
