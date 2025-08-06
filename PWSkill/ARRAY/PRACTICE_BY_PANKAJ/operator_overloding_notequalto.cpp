#include<iostream>
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
    bool operator!=(complex c)
    {
        return (real != c.real) || (imag != c.imag);
    }
};
int main()
{
    complex c1, c2;
    c1.setValues(2, 5);
    c2.setValues(2, 5);
    if(c1 != c2)
        cout << "Complex numbers are not equal." << endl;
    else
        cout << "Complex numbers are equal." << endl;
    return 0;
}