/*#include<iostream>
using namespace std;
void change(int[]);
int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << arr[0] << endl;
    change(arr); cout << arr[0] << endl;
    return 0;
}
void change(int a[])
{
    a[0] = 9;
}*/
// 1
// 9
/*#include<iostream>
using namespace std;
void change2D(int a[][])
{
    a[0][0] = 55;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
    return 0;
}*/
/*error: array has incomplete element type 'int[]'
   19 | void change2D(int a[][])
      |                    ^
2dArrayIntoFunctio.cpp:27:5: error: no matching function for call to 'change2D'
   27 |     change2D(arr);
      |     ^~~~~~~~
2dArrayIntoFunctio.cpp:19:6: note: candidate function not viable: no known conversion from 'int[3][3]' to 'int' for 1st argument
   19 | void change2D(int a[][])
      |      ^        ~~~~~
2 errors generated.*/
/*#include<iostream>
using namespace std;
void change2D(int a[3][])
{
    a[0][0] = 55;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
    return 0;
}*/
/*error: array has incomplete element type 'int[]'
   43 | void change2D(int a[3][])
      |                    ^
2dArrayIntoFunctio.cpp:51:5: error: no matching function for call to 'change2D'
   51 |     change2D(arr);
      |     ^~~~~~~~
2dArrayIntoFunctio.cpp:43:6: note: candidate function not viable: no known conversion from 'int[3][3]' to 'int' for 1st argument
   43 | void change2D(int a[3][])
      |      ^        ~~~~~
2 errors generated.*/
/*#include<iostream>
using namespace std;
void change2D(int a[3][3])
{
    a[0][0] = 55;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
    return 0;
}*/
//1
//55
/*#include<iostream>
using namespace std;
void change2D(int a[3][3])
{
    a[0][0] = 55;
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
    return 0;
}*/
//1
//55
#include<iostream>
using namespace std;
void change2D(int a[3][3]) // a[size][size] mandatory size 
{
    a[0][0] = 55;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
    return 0;
}