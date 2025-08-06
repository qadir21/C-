#include<iostream>
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
    { // instance member variable
        return s;
    }
    static void set_static(int c)
    {
        cout << x;
        s = c;
    }
};
int Product::s = 15; //Static member initialization

int main()
{
    cout << Product::get_static() << endl; // 15 
    return 0;
}*/
/* invalid use of member 'x' in static member function
        cout << x;
                ^*/
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
    cout << Product::get_static() << endl; // 15 
    return 0;
}