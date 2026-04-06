/*#include<iostream>
using namespace std;
class complex
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
    friend complex operator+(complex ,complex);
};
int main()
{
    complex c1, c2, c3;
    c1.setValues(2, 5);
    c2.setValues(3, 7);
    c1.print();
    c2.print();
    c3 = c1 + c2;
    cout << "After addition: ";
    c3.print();
    return 0;
}
complex operator+(complex x, complex y)
{
    complex temp;
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag;
    return temp;
}*/
/*2 + 5i
-----------------------------
3 + 7i
-----------------------------
After addition: 5 + 12i*/
/*#include <iostream>
using namespace std;
class complex
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

    // Friend function declaration for operator+ overloading
    friend complex operator+(const complex &c, int x);
};

// Definition of friend function for operator+ overloading
int main()
{
    complex c1, c2, c3;
    c1.setValues(2, 5); // method 1.
    c2.setValues(3, 7);
    c1.print();
    c2.print();

    // Using overloaded operator+ with c1 and an integer
    c3 = c1 + 10;
    cout << "After addition: ";
    c3.print();

    return 0;
}
complex operator+(const complex &c, int x)
{
    complex temp;
    temp.real = c.real + x;
    temp.imag = c.imag;
    return temp;
}*/
/*2 + 5i
-----------------------------
3 + 7i
-----------------------------
After addition: 12 + 5i*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex operator+(int a)
    {
        complex temp;
        temp.real = real + a;
        temp.imag = imag;
        return temp;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setValues(2, 5);
    c2.setValues(3, 7);
    c1.print();
    c2.print();
    c3 = c1 + 10;
    cout << "After addition: ";
    c3.print();
    return 0;
}*/
/*2 + 5i
-----------------------------
3 + 7i
-----------------------------
After addition: 12 + 5i*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex operator+(int a)
    {
        complex temp;
        temp.real = real + a;
        temp.imag = imag;
        return temp;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setValues(2, 5);
    c2.setValues(3, 7);
    c1.print();
    c2.print();
    c3 = 10 + c2;
    cout << "After addition: ";
    c3.print();
    return 0;
}*/
/*Friend_function.cpp:171:13: error: invalid operands to binary expression ('int' and 'complex')
  171 |     c3 = 10 + c2;
      |          ~~ ^ ~~
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__iterator/reverse_iterator.h:302:1: note: candidate template ignored: could not match 'reverse_iterator<_Iter>' against 'complex'
  302 | operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x) {
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__iterator/wrap_iter.h:194:1: note: candidate template ignored: could not match '__wrap_iter<_Iter1>' against 'complex'
  194 | operator+(typename __wrap_iter<_Iter1>::difference_type __n, __wrap_iter<_Iter1> __x) _NOEXCEPT {
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__iterator/move_iterator.h:328:1: note: candidate template ignored: could not match 'move_iterator<_Iter>' against 'complex'
  328 | operator+(typename move_iterator<_Iter>::difference_type __n, const move_iterator<_Iter>& __x) {
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/string:3865:1: note: candidate template ignored: could not match 'basic_string<_CharT, _Traits, _Allocator>' against 'int'
 3865 | operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs,
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/string:3882:1: note: candidate template ignored: could not match 'const _CharT *' against 'int'
 3882 | operator+(const _CharT* __lhs, const basic_string<_CharT, _Traits, _Allocator>& __rhs) {
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/string:3898:1: note: candidate template ignored: could not match 'basic_string<_CharT, _Traits, _Allocator>' against 'complex'
 3898 | operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Allocator>& __rhs) {
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/string:3913:1: note: candidate template ignored: could not match 'basic_string<_CharT, _Traits, _Allocator>' against 'int'
 3913 | operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, const _CharT* __rhs) {
      | ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/string:3929:1: note: candidate template ignored: could not match 'basic_string<_CharT, _Traits, _Allocator>' against 'int'
 3929 | operator+(const basic_string<_CharT, _Traits, _Allocator>& __lhs, _CharT __rhs) {
      | ^
1 error generated.*/
/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex operator+(int a)
    {
        complex temp;
        temp.real = real + a;
        temp.imag = imag;
        return temp;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    friend complex operator+(int , complex);
};
int main()
{
    complex c1, c2, c3;
    c1.setValues(2, 5);
    c2.setValues(3, 7);
    c1.print();
    c2.print();
    c3 = 10 + c2;
    cout << "After addition: ";
    c3.print();
    return 0;
}
complex operator+(int x, complex c)
{
    complex temp;
    temp.real = x + c.real;
    temp.imag = c.imag;
    return temp;
}*/
/*2 + 5i
-----------------------------
3 + 7i
-----------------------------
After addition: 13 + 7i
-----------------------------
(base) qadir@Qadirs-MacB*/
#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void setValues(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex operator+(int a)
    {
        complex temp;
        temp.real = real + a;
        temp.imag = imag;
        return temp;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    friend complex operator*(int, complex);
};
int main()
{
    complex c1, c2, c3;
    c1.setValues(2, 5);
    c2.setValues(3, 7);
    c1.print();
    c2.print();
    c3 = 10 * c2;
    cout << "After addition: ";
    c3.print();
    return 0;
}
complex operator*(int a, complex p)
{
    complex temp;
    temp.real = a * p.real;
    temp.imag = a * p.imag;
    return temp;
}