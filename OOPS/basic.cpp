#include<iostream>
using namespace std;

class Student {
    char name[20];
    int rNo;
    int age;
    int mobNo;
    char address[50];
};

class Player{
    public:
    int score;
    int health;
    char name[20];
};

int main(){
    int health[100] = {};
    int score[100] = {};
    char name[100][10] = {};
    
    Student naman;

    int a = 10;

    // int a = "Ravi"; --> error becouse  a is not string type veriable
    // Student Arnav = 10; --> error  becouse Arnav is not integer type variable or object.
    Player amit;
    amit.score = 90;
    amit.health = 100;
    cout << amit.name << " " << amit.health << " " << amit.score;
    cout << endl;

    Player harsh;
    harsh.health = 100;
    harsh.score = 20;
    cout << harsh.health << " " << harsh.score << " " << harsh.name ;
    return 0;
}