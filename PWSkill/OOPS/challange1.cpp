#include<iostream>
using namespace std;

class Book{
    public:
    char name;
    int price;
    int noOfPages;

    int countBooks(int p){
        if(price < p) return - 1;
        else return 0;
    }

    bool isBookPresent(char b){
        if(name == b) return true;
        else return false; 
    }
};
int main(){
    Book x;
    x.name = 'A';
    x.price = 20;
    x.noOfPages  = 29;

    cout << x.countBooks(200) << " " << x.isBookPresent('m') << endl;
    return 0;
}