#include<iostream>
using namespace std;
int main()
{
    int selling_price, cost_price, temp ;
    cout << "Enter selling price: ";
    cin >> selling_price;
    cout << "Enter cost price: ";
    cin >> cost_price;
    temp = selling_price - cost_price;
    if (selling_price > cost_price)
    {
        cout << "Profit is: " << temp <<  endl;
    }
    else  if (selling_price < cost_price)
    {
        cout << " Loss is: " << temp << endl;
    }
    else 
    {
        cout << "No profit or loss" << endl;
    }
    return 0;
}