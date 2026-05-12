#include<iostream> 
using namespace std;

class Player{
    private:
    int health;
    int score;

    public:
    void setHealth(int h){
        health = h;
    }

    void setScore(int s){
        score = s;
    }

    int getHealth(){
        return health;
    }

    int getScore(){
        return score;
    }
};
int main(){
    Player p1;
    p1.setHealth(13);
    p1.setScore(15);

    cout << p1.getHealth() << endl;
    cout << p1.getScore() << endl;
    return 0;
}