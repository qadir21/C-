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
        cout << "🤣-----------------------------😀" << endl;
    }
    void operator++()
    {
        real++;
        imag++;
    }
};
int main()
{
    complex c1, c2;
    c1.setValues(2, 5);
    c1.print();
    ++c1;
    cout << "After increment: ";
    c1.print();
    return 0;
}