#include<iostream>
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
        cout << "���-----------------------------��" << endl;
    }
    Complex& operator++()
    {
        Complex temp;
        real = real + 1;
        imag = imag + 1;
        return *this;
    }
};
int main()
{
    Complex c1, c2;
    c1.setValues(2, 5);
    c1.print();
    c2 = ++(++c1);
    cout << "After increment: ";
    c2.print();
    cout << "After increment: ";
    c1.print();
    return 0;
}