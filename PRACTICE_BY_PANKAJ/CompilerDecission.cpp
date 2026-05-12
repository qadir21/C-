#include<iostream>
using namespace std;
/*void fun (char a) { cout << a << " " << endl; }
void fun (int b) { cout << b << " " << endl; }
int main()
{
    char a = 'A'; // --> A
    fun(a); 
    return 0;
}*/
/*void fun (float a) { cout << a << " " << endl; }
void fun (int b) { cout << b << " " << endl; }
int main()
{
    char a = 'A'; // --> 65
    fun(a); 
    return 0;
}*/
/*struct student 
{
    int age;
    float marks;
};
void fun (char a) { cout << a << " " << endl; }
void fun (struct student b) { cout << "Hello " << endl; } // --> A
int main()
{
    char a = 'A';
    fun(a); 
    return 0;
}*/
/*struct student 
{
    int age;
    float marks;
};
int fun (float a) { cout << a << " " << endl; return 1;} 
void fun (char a) { cout << a << " " << endl; } // --> A
void fun (struct student b) { cout << "Hello " << endl; }
int main()
{
    char a = 'A';
    fun(a); 
    return 0;
}*/
/*int fun (float a) { cout << a << " " << endl; return 1;} 
void fun (double b ) { cout << "hello" << endl; } 
int main()    // Error message
{
    char a = 'A';
    fun(a); 
    return 0;
}*/
/*int fun (char a) { cout << a << " " << endl; return 1;} 
void fun (double b ) { cout << "hello" << endl; } 
int main()    // Error    
{
    int a = 23;
    fun(a); 
    return 0;
}*/



