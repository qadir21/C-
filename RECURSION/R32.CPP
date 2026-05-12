#include <iostream>
#include <vector>
using namespace std;
void input(vector<int>&, int);              
void output(vector<int>, int);              
void merge_sort(vector<int>&, int, int);
void merge(vector<int>&, int, int, int);    
int main() 
{
    vector<int> v;
    cout << "Enter vector elements......." << endl;
    input(v, 1);
    cout << "The entered elements are........" << endl;
    output(v, 0);
    merge_sort(v, 0, v.size() - 1); 
    cout << "The sorted elements are........" << endl;
    output(v, 0);
    return 0;
}
void input(vector<int>& a, int i) 
{
    int choice, n;
    cout << "Enter element " << i << " : ";
    cin >> n;
    a.push_back(n);
    cout << "Press 0 for exit otherwise press any key: ";
    cin >> choice;
    if (choice) {
        input(a, ++i);
    }
}
void output(vector<int> v1, int j) {
    if (j == v1.size()) return;
    cout << "Element " << j + 1 << " : " << v1[j] << endl;
    output(v1, j + 1);
}
void merge_sort(vector<int>& b, int st, int en) 
{
    if (st >= en) return;

    int mid = st + (en - st) / 2; 
    merge_sort(b, st, mid);       
    merge_sort(b, mid + 1, en);   
    merge(b, st, mid, en);        
}
void merge(vector<int>& c, int s, int m, int e) 
{
    vector<int> temp(e - s + 1); 
    int l = s, r = m + 1, k = 0;
    while (l <= m && r <= e) {
        if (c[l] <= c[r]) {
            temp[k++] = c[l++];
        } else {
            temp[k++] = c[r++];
        }
    }
    while (l <= m) {
        temp[k++] = c[l++];
    }
    while (r <= e) {
        temp[k++] = c[r++];
    }
    for (int i = 0; i < temp.size(); i++) {
        c[s + i] = temp[i];
    }
}