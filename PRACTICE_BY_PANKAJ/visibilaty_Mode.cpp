/*#include<iostream>
using namespace std;
class A
{
    public:
    float bonus;
};
class B
{
    public:
    float salary;
};
class D: protected A, private B
{
    private: // bonus variable of base class
    protected: //salary variable of base class
    public: void show_salary()
    {
        cout << "Salary: " << salary + bonus << endl;
    }
};
int main()
{
    D obj;
    obj.show_salary();
    return 0;
}*/
// Salary: -9.30146e+31
/*#include <iostream>
using namespace std;
class A
{
private:
    float bonus; // Full security
};
class B
{
private:
    float salary; // Full security
};
class D : protected A, private B
{
private:  
protected: 
public:
    void show_salary()
    {
        cout << "Salary: " << salary + bonus << endl;
    }
};
int main()
{
    D obj;
    obj.show_salary();
    r
    return 0;
}*/
/*isibilaty_Mode.cpp:48:31: error: 'salary' is a private member of 'B'
   48 |         cout << "Salary: " << salary + bonus << endl;
      |                               ^
visibilaty_Mode.cpp:39:11: note: declared private here
   39 |     float salary; // Full security
      |           ^
visibilaty_Mode.cpp:48:40: error: 'bonus' is a private member of 'A'
   48 |         cout << "Salary: " << salary + bonus << endl;
      |                                        ^
visibilaty_Mode.cpp:34:11: note: declared private here
   34 |     float bonus; // Full security
      |           ^
2 errors generated.*/
/*#include <iostream>
using namespace std;
class A
{
private:
    float bonus; // Full security
public:
    float get_bonus() { return bonus; }
};
class B
{
private:
    float salary; // Full security
public:
    float get_salary() { return salary; }
};
class D : protected A, private B
{
private:
protected:
public:
    void show_salary()
    {
        cout << "Salary: " << salary + bonus << endl;
    }
};
int main()
{
    D obj;
    obj.show_salary();
    return 0;
}*/
/*error: 'salary' is a private member of 'B'
   94 |         cout << "Salary: " << salary + bonus << endl;
      |                               ^
visibilaty_Mode.cpp:83:11: note: declared private here
   83 |     float salary; // Full security
      |           ^
visibilaty_Mode.cpp:94:40: error: 'bonus' is a private member of 'A'
   94 |         cout << "Salary: " << salary + bonus << endl;
      |                                        ^
visibilaty_Mode.cpp:76:11: note: declared private here
   76 |     float bonus; // Full security
      |           ^
visibilaty_Mode.cpp:101:5: error: use of undeclared identifier 'r'
  101 |     r return 0;
      |     ^
3 errors generated.*/
/*#include <iostream>
using namespace std;
class A
{
private:
    float bonus; // Full security
public:
    float get_bonus() { return bonus; }
};
class B
{
private:
    float salary; // Full security
public:
    float get_salary() { return salary; }
};
class D : protected A, private B
{
private:
protected:
public:
    void show_salary()
    {
        cout << "Salary: " << get_salary() + get_bonus()<< endl;
    }
};
int main()
{
    D obj; //---> Derived class ka object.
    obj.show_salary();
    return 0;
}*/
//Salary : -9.30146e+31
/*#include <iostream>
using namespace std;
class A
{
private:
    float bonus; // Full security
public:
    float get_bonus() { return bonus; }
    A(float b = 0.0) { bonus = b; } // Constructor for class A
};
class B
{
private:
    float salary; // Full security
public:
    float get_salary() { return salary; }
    B(float s = 0.0) { salary = s; } // Constructor for class B
};
class D : protected A, private B
{
private:
protected:
public:
    void show_salary()
    {
        cout << "Salary: " << get_salary() + get_bonus() << endl;
    }
};
int main()
{
    D obj; //---> Derived class ka object. 
    // Oder of constructor ---> D() -->
    obj.show_salary();
    return 0;
}*/
// Salary: 0
/*#include<iostream> 
using namespace std;
class A
{
private:
    float bonus; // Full security
public:
    float get_bonus() { return bonus; }
    A(float b) { bonus = b; } // Constructor for class A
};
class B
{
private:
    float salary; // Full security
public:
    float get_salary() { return salary; }
    B(float s = 0.0) { salary = s; } // Constructor for class B
};
class D : protected A, private B
{
private:
protected:
public:
    void show_salary()
    {
        cout << "Salary: " << get_salary() + get_bonus() << endl;
    }
};
int main()
{
    D obj; //---> Derived class ka object.
    // Oder of constructor ---> D() -->
    obj.show_salary();
    return 0;
}*/
/*error: implicit default constructor for 'D' must explicitly initialize the base class 'A' which does not have a default constructor
  206 | class D : protected A, private B
      |       ^
visibilaty_Mode.cpp:218:7: note: in implicit default constructor for 'D' first required here
  218 |     D obj; //---> Derived class ka object.
      |       ^
visibilaty_Mode.cpp:190:7: note: 'A' declared here
  190 | class A
      |       ^
1 error generated.*/
/*#include <iostream>
using namespace std;
class A
{
private:
    float bonus; // Full security
public:
    float get_bonus() { return bonus; }
    A(float b) { bonus = b; } // Constructor for class A
};
class B
{
private:
    float salary; // Full security
public:
    float get_salary() { return salary; }
    B(float s = 0.0) { salary = s; } // Constructor for class B
};
class D : protected A, private B
{
private:
protected:
public:
    void show_salary()
    {
        cout << "Salary: " << get_salary() + get_bonus() << endl;
    }
    D(float b, float s) : A(b),B(s)
    {

    }
};
int main()
{
    D obj(12000,1000); 
    obj.show_salary();
    return 0;
}*/
// Salary: 13000
#include <iostream>
using namespace std;
class A
{
private:
    float bonus; // Full security
public:
    float get_bonus() { return bonus; }
    A(float b) { bonus = b; } // Constructor for class A
};
class B
{
private:
    float salary; // Full security
public:
    float get_salary() { return salary; }
    B(float s = 0.0) { salary = s; } // Constructor for class B
};
class D : protected A, private B
{
private:
protected:
public:
    void show_salary()
    {
        cout << "Salary: " << get_salary() + get_bonus() << endl;
    }
    D(float b, float s) : A(b), B(s)
    {
    }
};
int main()
{
    D obj(12000, 1000);
    obj.show_salary();
    return 0;
}