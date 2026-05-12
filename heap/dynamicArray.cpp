#include<iostream>
using namespace std;

class DynamicArray
{
    int* arr;
    int capacity;
    int n;

public:

    DynamicArray()
    {
        capacity = 2;
        n = 0;
        arr = new int[capacity];
    }

    void resize()
    {
        capacity *= 2;

        int* newArr = new int[capacity];

        for(int i=0;i<n;i++)
            newArr[i] = arr[i];

        delete[] arr;
        arr = newArr;
    }

    int& operator[](int index)
    {
        if(index >= capacity)
        {
            while(index >= capacity)
                resize();
        }

        if(index >= n)
            n = index + 1;

        return arr[index];
    }
};

int main()
{
    DynamicArray a;
    a[0] = INT_MAX;
    a[1] = 10;
    a[2] = 20;
    a[3] = 30;
    a[4] = 50;

    cout << a[0] << endl;
}