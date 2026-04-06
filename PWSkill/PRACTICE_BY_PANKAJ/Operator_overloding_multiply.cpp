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
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
        cout << "-----------------------------" << endl;
    }
    complex operator*(int k)
    {
        complex temp;
        temp.real = real * k;
        temp.imag = imag * k;
        return temp;
    }
};
int main()
{
    complex c1, c2;
    c1.setValues(2, 5);
    c1.print();
    c2 = c1 * 3;
    cout << "After multiplication: " << endl;
    c2.print();
    return 0;
}