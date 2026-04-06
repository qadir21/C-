/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void printDetails()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex(complex &t)
    {
        real = t.real;
        imag = t.imag;
    }
    ~complex()
    {
        cout << "Bye Bye ...." << endl;
        cout << "--------------------------------" << endl;
    }
};
int  main()
{
    complex *ptr;
    ptr = new complex;
    ptr ->printDetails();
    return 0;
}*/
/*0 + 0i
0 + 0i*/
#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void printDetails()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    int *p, *q;
    complex *ptr;
    ptr = new complex;
    ptr->printDetails();
    p = new int(9);
    q = new int[4];
    cout << p << endl;
    cout << *p << endl;
    delete p;
    delete[] q;
    delete ptr;
    return 0;
}