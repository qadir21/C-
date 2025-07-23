/*#include<iostream>
using namespace std;
class complex
{
    private:
        int real, imag;
    public:
        void setvalue(int a, int b)
        {
            real = a;
            imag = b;
        }
        void print()
        {
            cout << "Real part : " << real << " Imaginary part : " << imag << "i" << endl;
        }
};
int main()
{
    complex c1, c2;
    c1.setvalue(3, 4);
    c2.print();
    c1.print();
    return 0;
}*/
/*Real part : 303366145 Imaginary part : 78540812i
Real part : 3 Imaginary part : 4i*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setvalue(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << "Real part : " << real << " Imaginary part : " << imag << "i" << endl;
    }
    complex()
    {
        real = 0;
        imag = 0;
    }
};
int main()
{
    complex c1, c2;
    c1.setvalue(3, 4);
    c2.print();
    c1.print();
    return 0;
}*/
/*Real part : 0 Imaginary part : 0i
Real part : 3 Imaginary part : 4i*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setvalue(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout <<  real << " +" << imag << "i" << endl;
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
};
int main()
{
    complex c1, c2;
    complex c3(20,100);
    c2.print();
    c3.print();
    return 0;
}*/
/*0 +0i
20 +100i*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setvalue(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << real << " +" << imag << "i" << endl;
    }
    // complex()
    // {
    //     real = 0;
    //     imag = 0;
    // }
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
};
int main()
{
    complex c1, c2;
    complex c3(20, 100);
    c2.print();
    c3.print();
    return 0;
}*/
/*Real_imagenary.cpp:129:13: error: no matching constructor for initialization of 'complex'
    complex c1, c2;
            ^
Real_imagenary.cpp:101:7: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 0 were provided
class complex
      ^
Real_imagenary.cpp:121:5: note: candidate constructor not viable: requires 2 arguments, but 0 were provided
    complex(int a, int b)
    ^
Real_imagenary.cpp:129:17: error: no matching constructor for initialization of 'complex'
    complex c1, c2;
                ^
Real_imagenary.cpp:101:7: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 0 were provided
class complex
      ^
Real_imagenary.cpp:121:5: note: candidate constructor not viable: requires 2 arguments, but 0 were provided
    complex(int a, int b)
    ^
2 errors generated.*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setvalue(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << real << " +" << imag << "i" << endl;
    }
    complex()
    {
        real = 0;
        imag = 0;
        cout << "0 Argument wala" << endl;
    }
    complex(int a, int b)
    {
        real = a;
        imag = b;
        cout << "2 Argument wala" << endl;
    }
};
int main()
{
    complex c1, c2;
    complex c3(20, 100);
    complex c4 = c3; // Which constructor is called for c4;
    // c2.print();
    // c3.print();
    return 0;
}*/
/*0 Argument wala
0 Argument wala
2 Argument wala*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setvalue(int a, int b)
    {
        real = a;
        imag = b;
    }
    void print()
    {
        cout << real << " +" << imag << "i" << endl;
    }
};
int main()
{
    complex c1, c2;
    complex c3(20, 100);
    complex c4 = c3; // Which constructor is called for c4;
    // c2.print();
    // c3.print();
    return 0;
}*/
/*Real_imagenary.cpp:217:13: error: no matching constructor for initialization of 'complex'
  217 |     complex c3(20, 100);
      |             ^  ~~~~~~~
Real_imagenary.cpp:198:7: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 2 were provided
  198 | class complex
      |       ^~~~~~~
Real_imagenary.cpp:198:7: note: candidate constructor (the implicit default constructor) not viable: requires 0 arguments, but 2 were provided
1 error generated.*/