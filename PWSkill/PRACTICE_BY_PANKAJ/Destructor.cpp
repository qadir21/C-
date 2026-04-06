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
    ~complex()
    {
        cout << "Bye Bye ...." << endl;
        cout << "--------------------------------" << endl;
    }
        // Release any dynamically allocated memory or resources here...
    // Add your member functions here...
    // Example:
    // double getMagnitude() { return sqrt(real * real + imag * imag); }
    // complex add(complex other) { return complex(real + other.real, imag + other.imag); }
    // complex subtract(complex other) { return complex(real - other.real, imag - other.imag); }
    // complex multiply(complex other) { return complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real); }
    // complex divide(complex other) { double denominator = other.real * other.real + other.imag * other.imag; return complex((real * other.real + imag * other.imag) / denominator, (imag * other.real - real * other.imag) / denominator); }
    // complex conjugate() { return complex(real, -imag); }
    // complex power(int exponent) { double magnitude = getMagnitude(); double phase = atan2(imag, real); return complex(pow(magnitude, exponent) * cos(exponent * phase), pow(magnitude, exponent) * sin(exponent * phase)); }
    // complex inverse() { double denominator = real * real + imag * imag; return complex(real / denominator, -imag / denominator); }
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
2 + 3i
-----------------------------
Bye Bye ....
--------------------------------
Bye Bye ....
--------------------------------
Bye Bye ....*/