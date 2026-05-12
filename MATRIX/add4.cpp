#include<iostream> 
using namespace std;

void input(int **, int, int , int = 0, int = 0);
void output(int **, int, int, int = 0, int = 0);
void sum(int **, int **, int, int, int = 0, int = 0);

int main()
{
    int r, c;
    cout << "Enter number of rows of array: ";
    cin >> r;
    cout << "Enter number of columns of array: ";
    cin >> c;
    int **arr1 = new int*[r], **arr2 = new int*[r];
    for(int i = 0; i < r; i++) 
    {
        arr1[i] = new int[c];
        arr2[i] = new int[c];
    }
    cout << "Enter elements of first array:" << endl;
    input(arr1, r, c);
    cout << "Enter elements of second array:" << endl;
    input(arr2, r, c);
    cout << "First matrix:" << endl;
    output(arr1, r, c);
    cout << "Second matrix:" << endl;
    output(arr2, r, c);
    sum(arr1, arr2, r, c);
    cout << "Sum of both matrices:" << endl;
    output(arr1, r, c);

    for(int i = 0; i < r; i++) 
    {
        delete[] arr1[i];
        delete[] arr2[i];
    }
    delete[] arr1;
    delete[] arr2;
    
    return 0;
}
void input(int **a, int r, int c, int i, int j)
{
    if(i == r) return;
    if(j == c) input(a, r, c, i + 1, 0);
    else
    {
        cout << "Enter Element (" << i << "," << j << ") : ";
        cin >> a[i][j];
        input(a, r, c, i, j + 1);
    }
}
void output(int **a, int r, int c, int i, int j)
{
    if(i == r) return;
    if(j == c) 
    {
        cout << endl;
        output(a, r, c, i + 1, 0);
    } else 
    {
        cout << a[i][j] << " ";
        output(a, r, c, i, j + 1);
    }
}
void sum(int **a1, int **a2, int r, int c, int i, int j)
{
    if(i == r) return;
    if(j == c) sum(a1, a2, r, c, i + 1, 0);
    else
    {
        a1[i][j] = a1[i][j] + a2[i][j];
        sum(a1, a2, r, c, i, j + 1);
    }
}