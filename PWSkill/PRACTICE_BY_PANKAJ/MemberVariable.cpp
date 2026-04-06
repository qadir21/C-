#include<iostream>
using namespace std;
class student
{
    private:
        int age;
        char name[20];
        float marks;
    public:
    void print_detail();
    void input_data();
};
void student :: print_detail()
        {
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
            cout << "Marks : " << marks << endl;
        }
void student :: input_data()
        {
            cout << "Enter age name and marks : ";
            cin >> age;
            cin.ignore();
            cin.getline(name, 20);
            cin >> marks;
        }
int main()
{
    student s1;
    student s2;
    s1.input_data();
    s2.input_data();
    s1.print_detail();
    s2.print_detail();
    return 0;
}