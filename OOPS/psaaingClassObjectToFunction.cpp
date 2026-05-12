#include<iostream> 
using namespace std;

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    // Getters
    int getHealth() {
        return health;
    }

    int getScore() {
        return score;
    }

    int getAge() {
        return age;
    }

    bool isAlive() {
        return alive;
    }

    // Setters
    void setAge(int age) {
        this->age = age;
    }

    void setHealth(int health) {
        this->health = health;
    }

    void setScore(int score) {
        this->score = score;
    }
    
    void setAlive(bool alive) {
        this->alive = alive;
    }
};

int main(){
    Player p1;

    return 0;
}