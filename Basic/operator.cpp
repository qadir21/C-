#include<iostream>
using namespace std;
int main()
{
    int num_1 = 6,num_2 = 3;
    cout <<"The sum of the"<<" "<<num_1<<" and"<<" "<<num_2<<" "<<"is"<<" "<<num_1 + num_2<<endl;
    cout <<"The difference between the "<<num_1<<" and "<<num_2<<" is"<<" "<<num_1 - num_2<<endl;
    cout <<"The product of the "<<num_1<<" and "<<num_2<<" is "<<num_1 * num_2<<endl;
    cout <<"The quotient of the "<<num_1<<" and "<<num_2<<" is "<<static_cast<double>(num_1) / num_2<<endl;
    cout<<"The remainder is "<<num_1%num_2<<endl; 
    cout<<(num_1==num_2)<<endl;
    cout<<(num_1!=num_2)<<endl;
    cout<<(num_1>=num_2)<<endl;
    num_1 += 3;
    cout<<num_1<<endl;
    num_2 -= 2;
    cout<<num_2<<endl;// To avoid
    return 0;
}