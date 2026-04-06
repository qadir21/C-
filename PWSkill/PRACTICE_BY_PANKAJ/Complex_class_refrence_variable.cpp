/*#include<iostream>
using namespace std;
class complex
{
    private:
    int real, imag;
    public:
    void printDetails()
    {
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << imag << endl;
        cout << "-----------------------------" << endl;
    }
    complex ()
    {
        real = 0;
        imag = 0;
    }
    complex (int a, int b)
    {
        real = a;
        imag = b;
    }
    complex (complex &t)
    {
        real = t.real;
        imag = t.imag;
    }
};
int main()
{
    complex c1, c2(2, 3);
    complex c3 = c2;
    c1.printDetails();
    c2.printDetails();
    c3.printDetails();
    return 0;
}*/
/*Real part: 0
Imaginary part: 0
-----------------------------
Real part: 2
Imaginary part: 3
-----------------------------
Real part: 2
Imaginary part: 3*/ // ----> 1.
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
};
int main()
{
    complex c1, c2(2, 3);
    complex c3 = c2;
    c1.printDetails();
    c2.printDetails();
    c3.printDetails();
    return 0; 
}
/*0 + 0i
0 + 0i
-----------------------------
2 + 3i
2 + 3i
-----------------------------
2 + 3i
2 + 3i*/ // ------> 2.