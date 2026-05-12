#include<iostream>
using namespace std;
void subArray(int *a, int i, int size, string subset) 
{
    if (i == size) 
    {
        cout << "{" << subset << "}" << endl;
        return;
    }
    // Exclude current element
    subArray(a, i + 1, size, subset);
    // Include current element
    if (subset != "") subset += ", ";
    subset += to_string(a[i]);
    subArray(a, i + 1, size, subset);
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array.................." << endl;
    for(int i = 0; i < size; i++) 
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "The entered elements are................." << endl;
    for(int j = 0; j < size; j++) {
        cout << "Element " << j + 1 << " : " << arr[j] << endl;
    }
    cout << "\nAll subsets are:\n";
    subArray(arr, 0, size, "");

    return 0;
}