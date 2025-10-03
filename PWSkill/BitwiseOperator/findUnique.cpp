#include<iostream>
using namespace std;

void findUnique(int * a, int n){
    int res = 0;
    for(int i = 0; i < n; i++) res = res ^ a[i];
    int temp = res; 

    int k = 0;
    while(true){
        if((temp & 1) == 1) break;
        temp =  temp >> 1;
    k++;
    }

    int retval = 0;
    for(int i = 0; i < n; i++){
        int num = a[i];
        if(((num >> k) & 1) == 1) retval ^= num;
    }

    cout << retval << endl;
    res = retval ^ res;
    cout << res << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    findUnique(arr, n);
    return 0;
}