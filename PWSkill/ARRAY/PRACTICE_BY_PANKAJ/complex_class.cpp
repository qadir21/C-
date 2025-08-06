/*#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real, imag;
    public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    complex JodDo(complex p)
    {
        complex temp;
        temp.real = real + p.real;
        temp.imag = imag + p.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setValues(2, 5);
    c1.print();
    c2.setValues(3, 7);
    c2.print();
    c3 = c1.JodDo(c2);
    c3.print();
    return 0;
}*/
/*complex_class.cpp:18:5: error: unknown type name 'complex'; did you mean 'Complex'?
   18 |     complex JodDo(complex p)
      |     ^~~~~~~
      |     Complex
complex_class.cpp:3:7: note: 'Complex' declared here
    3 | class Complex
      |       ^
complex_class.cpp:18:19: error: unknown type name 'complex'; did you mean 'Complex'?
   18 |     complex JodDo(complex p)
      |                   ^~~~~~~
      |                   Complex
complex_class.cpp:3:7: note: 'Complex' declared here
    3 | class Complex
      |       ^
complex_class.cpp:20:9: error: unknown type name 'complex'; did you mean 'Complex'?
   20 |         complex temp;
      |         ^~~~~~~
      |         Complex
complex_class.cpp:3:7: note: 'Complex' declared here
    3 | class Complex
      |       ^
3 errors generated.*/
/*#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    Complex JodDo(Complex p)
    {
        Complex temp;
        temp.real = real + p.real;
        temp.imag = imag + p.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setValues(2, 5);
    c1.print();
    c2.setValues(3, 7);
    c2.print();
    c3 = c1.JodDo(c2);
    c3.print();
    return 0;
}*/
/*2 + 5i
-----------------------------
3 + 7i
-----------------------------
5 + 12i*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << "The Complex Number: " << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    Complex JodDo(Complex p)
    {
        Complex temp;
        temp.real = real + p.real;
        temp.imag = imag + p.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setValues(2, 5);
    c1.print();
    c2.setValues(3, 7);
    c2.print();
    c3 = c1.JodDo(c2);
    c3.print();
    return 0;
}