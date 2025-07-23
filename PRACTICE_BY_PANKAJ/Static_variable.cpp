#include<iostream>
#include<string.h>
/*using namespace std;
class Product
{
    public:
    int x,y;
    static int s;
};*/
/*int main()
{
    Product p1, p2;
    p1.x = 100;
    cout << p2.x; //Output --> Garbage value
    return 0;
}*/
/*int main()
{
    Product p1, p2;
    p1.x = 100;
    cout << p2.x; 
    s = p2.x;
    cout << s;
    return 0;
}*/
/*int Product::s = 15; //Static member initialization
int main()
{
    Product p1, p2;
    cout << Product :: s;
    p1.x = 100;
    p2.x = 200;
    Product :: s = 150;
    cout << "  " << Product :: s << endl;
    return 0;
}*/
/*using namespace std;
class Product
{
    private:
    int x,y;
    static int s;
};
int Product::s = 15; //Static member initialization
int main()
{
    Product p1, p2;
    cout << Product :: s;
    p1.x = 100; // error 
    p2.x = 200;
    Product :: s = 150;
    cout << "  " << Product :: s << endl;
    return 0;
}*/
/*using namespace std;
class Product
{
    private:
    int x,y;
    static int s;
    public:
    void printvalue()
    {
        cout << " X = " << x << " Y= " << y << endl;
    }
};
int Product::s = 15; //Static member initialization
int main()
{
    Product p1, p2;
    p1.printvalue();
    p2.printvalue(); // Garbage value
    return 0;
}*/
/*using namespace std;
class Product
{
    private:
    int x,y;
    static int s;
    public:
    void printvalue()
    {
        cout << " X = " << x << " Y= " << y << endl;
    }
    void setvalue(int a,int b)
    {
        x = a;
        y = b;
    }
    int get_x()
    {
        return x;
    }
};
int Product::s = 15; //Static member initialization
int main()
{
    Product p1, p2, p3;
    p1.setvalue(100,200);
    p3.setvalue(3,7);
    p1.printvalue();
    p2.printvalue();
    p3.printvalue(); 
    cout << "X = " << p2. get_x() << "  "; 
    cout << Product :: s;
    return 0;
}*/
/*error: 's' is a private member of 'Product'
    cout << Product :: s;
                       ^
Static_variable.cpp:80:16: note: declared private here
    static int s;
               ^*/
/*using namespace std;
class Product
{
    private:
    int x,y;
    static int s;
    public:
    void printvalue()
    {
        cout << " X = " << x << " Y= " << y << endl;
    }
    void setvalue(int a,int b)
    {
        x = a;
        y = b;
    }
    int get_x()
    {
        return x;
    }
    static int get_static()
    {
        return s;
    }
    static void set_static(int c)
    {
        s = c;
    }
};
int Product::s = 15; //Static member initialization

int main()
{
    cout << Product::get_static() << endl; // 15 
    return 0;
}*/
using namespace std;
class Product
{
    private:
    int x,y;
    static int s;
    public:
    void printvalue()
    {
        cout << " X = " << x << " Y= " << y << endl;
    }
    void setvalue(int a,int b)
    {
        x = a;
        y = b;
    }
    int get_x()
    {
        return x;
    }
    static int get_static()
    {
        return s;
    }
    static void set_static(int c)
    {
        s = c;
    }
};
int Product::s = 15; //Static member initialization

int main()
{
    cout << Product::get_static() << endl; 
    return 0;
}