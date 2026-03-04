#include<iostream>
using namespace std;

class Player{
    private:
    int health;

    // data member
    public:
    int score;

    void showHealth(){
        cout << "Health is " << health ;
    }
};

class Calculator{
    public: // data member
    int a;
    int b;

    void add(){ // member function
        cout << a + b;
    }

    void  sub(){
        cout << a - b;
    }
};

int main(){
    Player amit;
    amit.showHealth();
    cout << endl;

    Calculator c1;
    c1.a = 12;
    c1.b = 5;
    c1.add();
    cout << endl;
    c1.sub();
    return 0;
}