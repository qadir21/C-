/*#include<iostream>
using namespace std;

class A 
{
    public:
    int a;
    private:
    int b;
    protected:
    int c;
};
int main()
{
    A obj;
    cout << obj.b <<  endl;
    return 0;
}*/
/*error: 'b' is a private member of 'A'
   16 |     cout << obj.b <<  endl;
      |                 ^
Inheritence.cpp:9:9: note: declared private here
    9 |     int b;
      |         ^
1 error generated.*/
/*#include <iostream>
using namespace std;

class A
{
public:
    int a;

private:
    int b;

protected:
    int c;
};
int main()
{
    A obj;
    cout << obj.a << endl;
    return 0;
}*/
// yes this code is ok and output is garbage value.
/*#include <iostream>
using namespace std;

class A
{
public:
    int a;
private:
    int b;
protected:
    int c;
};
int main()
{
    A obj;
    cout << obj.c << endl;
    return 0;
}*/
/*'c' is a protected member of 'A'
   64 |     cout << obj.c << endl;
      |                 ^
Inheritence.cpp:59:9: note: declared protected here
   59 |     int c;
      |         ^
1 error generated */
/*#include <iostream>
using namespace std;
class student
{
    private:
        char name[20];
        int roll_no;
    protected:
        void set_name(char *ptr)
        {
            strcpy(name, ptr);
        }
        void set_roll_no(int x)
        {
            roll_no = x;
        }
    public:
        char *get_name()
        {
            return name;
        }
        int get_roll_no()
        {
            return roll_no;
        }
};
int main()
{
    student s1;
    s1.set_name("John Doe"); // invalid
    return 0;
}*/
/*'set_name' is a protected member of 'student'
  103 |     s1.set_name("John Doe"); // invalid
      |        ^
Inheritence.cpp:82:14: note: declared protected here
   82 |         void set_name(char *ptr)
      |              ^
Inheritence.cpp:103:17: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  103 |     s1.set_name("John Doe"); // invalid
      |                 ^
1 warning and 1 error generated.*/
/*include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;
protected:
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_roll_no(int x)
    {
        roll_no = x;
    }

public:
    char *get_name()
    {
        return name;
    }
    int get_roll_no()
    {
        return roll_no;
    }
};
int main()
{
    student s1;
    cout <<  s1.name; 
    return 0;
}*/
/*'name' is a private member of 'student'
  147 |     cout <<  s1.name;
      |                 ^
Inheritence.cpp:121:10: note: declared private here
  121 |     char name[20];
      |          ^
1 error generated.*/
/*#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;

protected:
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_roll_no(int x)
    {
        roll_no = x;
    }

public:
    char *get_name()
    {
        return name;
    }
    int get_roll_no()
    {
        return roll_no;
    }
};
int main()
{
    student s1;
    s1.set_name("John Doe");
    return 0;
}*/
/*set_name' is a protected member of 'student'
  189 |     s1.set_name("John Doe");
      |        ^
Inheritence.cpp:167:10: note: declared protected here
  167 |     void set_name(char *ptr)
      |          ^
Inheritence.cpp:189:17: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  189 |     s1.set_name("John Doe");
      |                 ^
1 warning and 1 error generated.*/
/*#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;
protected:
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_roll_no(int x)
    {
        roll_no = x;
    }
public:
    char *get_name()
    {
        return name;
    }
    int get_roll_no()
    {
        return roll_no;
    }
};
class physique : public student
{
    private:
        int height, weight;
    protected:
        void set_height(int h)
        {
            height = h;
        }
        void set_weight(int w)
        {
            weight = w;
        }
    public:
        int get_height()
        {
            return height;
        }
        int get_weight()
        {
            return weight;
        }
};
int main()
{
    physique p; // code will executed successfully.
    p.get_height();
    p.get_weight();
    p.get_name();
    p.get_roll_no();
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;

protected:
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_roll_no(int x)
    {
        roll_no = x;
    }

public:
    char *get_name()
    {
        return name;
    }
    int get_roll_no()
    {
        return roll_no;
    }
};
class physique : public student
{
private:
    int height, weight;

protected:
    void set_height(int h)
    {
        height = h;
    }
    void set_weight(int w)
    {
        weight = w;
    }

public:
    int get_height()
    {
        return height;
    }
    int get_weight()
    {
        return weight;
    }
};
int main()
{
    physique p;
    p.set_height();
    p.set_weight();
    return 0;
}*/
/* error: 'set_height' is a protected member of 'physique'
  317 |     p.set_height();
      |       ^
Inheritence.cpp:295:10: note: declared protected here
  295 |     void set_height(int h)
      |          ^
Inheritence.cpp:317:18: error: too few arguments to function call, single argument 'h' was not specified
  317 |     p.set_height();
      |     ~~~~~~~~~~~~ ^
Inheritence.cpp:295:10: note: 'set_height' declared here
  295 |     void set_height(int h)
      |          ^          ~~~~~
Inheritence.cpp:318:7: error: 'set_weight' is a protected member of 'physique'
  318 |     p.set_weight();
      |       ^
Inheritence.cpp:299:10: note: declared protected here
  299 |     void set_weight(int w)
      |          ^
Inheritence.cpp:318:18: error: too few arguments to function call, single argument 'w' was not specified
  318 |     p.set_weight();
      |     ~~~~~~~~~~~~ ^
Inheritence.cpp:299:10: note: 'set_weight' declared here
  299 |     void set_weight(int w)
      |          ^          ~~~~~*/
/*#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;

protected:
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_roll_no(int x)
    {
        roll_no = x;
    }

public:
    char *get_name()
    {
        return name;
    }
    int get_roll_no()
    {
        return roll_no;
    }
};
class physique : public student
{
private:
    int height, weight;

protected:
    void set_height(int h)
    {
        height = h;
    }
    void set_weight(int w)
    {
        weight = w;
    }

public:
    int get_height()
    {
        return height;
    }
    int get_weight()
    {
        return weight;
    }
    void set_student(char *ptr, int r, int g, int b)
    {
        set_name(ptr);
        set_roll_no(r);
        height = g;
        weight = b;
    }
};
int main()
{
    physique p;
    p.set_student("John Doe", 1, 180, 75);
    cout << "Name: " << p.get_name() << endl;
    cout << "Roll No: " << p.get_roll_no() << endl;
    cout << "Height: " << p.get_height() << " cm" << endl;
    cout << "Weight: " << p.get_weight() << " kg" << endl;
    return 0;
}*/
/* warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  409 |     p.set_student("John Doe", 1, 180, 75);
      |                   ^
1 warning generated.
Name: John Doe
Roll No: 1
Height: 180 cm
Weight: 75 kg*/
#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;

protected:
    void set_name(char *ptr)
    {
        strcpy(name, ptr);
    }
    void set_roll_no(int x)
    {
        roll_no = x;
    }

public:
    char *get_name()
    {
        return name;
    }
    int get_roll_no()
    {
        return roll_no;
    }
};
class physique : public student
{
private:
    int height, weight;

protected:
    void set_height(int h)
    {
        height = h;
    }
    void set_weight(int w)
    {
        weight = w;
    }

public:
    int get_height()
    {
        return height;
    }
    int get_weight()
    {
        return weight;
    }
    void set_student(char *ptr, int r, int g, int b)
    {
        set_name(ptr);
        set_roll_no(r);
        height = g;
        weight = b;
    }
};
int main()
{
    physique p;
    p.set_student("Qadir", 1, 180, 54);
    cout << "Name: " << p.get_name() <<"." << endl;
    cout << "Roll No: " << p.get_roll_no() << "." << endl;
    cout << "Height: " << p.get_height() << " cm." << endl;
    cout << "Weight: " << p.get_weight() << " kg." << endl;
    return 0;
}