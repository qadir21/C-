#include<iostream> 
using namespace  std;

class Bike{
    public:
        int tyreSize;
        Bike(){
            cout << "constructor call hua!.";
        }
        Bike(int tyreSize){
            this->tyreSize = tyreSize;
        }
};

int main(){
    cout << "Hello Everyone." << endl;

    Bike tvs(10); // Object creation; // constructor call ho jayaga.
    Bike honda(13);

    cout << tvs.tyreSize << " ";
    cout << honda.tyreSize << " ";
    return 0;
}