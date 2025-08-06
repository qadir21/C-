/*#include<iostream>
using namespace std;
class A
{
    public:
        void fun()
        {
            cout << "A class." << endl;
        }
};
class B
{
    public:
        void fun()
        {
            cout << "B class." << endl;
        }
};
class D: public A, public B
{
    private:
            int a;
    public:
            void f()
            {
                cout << "Class D." << endl;
            }
};
int main()
{
    D obj;
    obj.fun();
    return 0;
}*/
/*member 'fun' found in multiple base classes of different types
   32 |     obj.fun();
      |         ^
Binding.cpp:6:14: note: member found by ambiguous name lookup
    6 |         void fun()
      |              ^
Binding.cpp:14:14: note: member found by ambiguous name lookup
   14 |         void fun()
      |              ^
1 error generated.*/
#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "A class." << endl;
    }
};
class B
{
public:
    void fun()
    {
        cout << "B class." << endl;
    }
};
class D : public A, public B
{
private:
    int a;

public:
    void f()
    {
        cout << "Class D." << endl;
    }
};
int main()
{
    D obj;
    obj.fun();
    return 0;
}