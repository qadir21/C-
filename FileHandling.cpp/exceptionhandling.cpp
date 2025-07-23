#include<iostream>
using namespace std;
class customer
{
public:
    int balance,account_number;
    string name;
    customer(string name, int balance,int account_number)
    {
        this->name = name;
        this -> balance = balance;
        this -> account_number = account_number;
    }
    // Deposite
    void deposit(int ammount)
    {
        if(ammount < 0)
        {
            throw "Ammont should be grater than 0";
        }
        else
        {
            balance += ammount;
            cout << ammount << " rs is created sucessully" << endl;
        }
    }
    // withdraw
    void withdraw(int ammount)
    {
        if (ammount < 0)
        {
            throw "Ammount should be greater than 0";
        }
        else if(ammount >= balance)
        {
            throw "Your balanace is low";
        }
        else
        {
            balance -= ammount;
            cout << ammount << " rs ammount is debiated sucessfully" << endl;
        }
    }
};
int main()
{
    customer c1("Qadir", 5000, 1);
    try
    {
        c1.deposit(100);
        c1.withdraw(6000);
    }
    catch(const char * e)
    {
        cout << "Exception occured !!." << e << endl;
    }
    return 0;
}
