#include<iostream>
using namespace std;
int main(){
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    // Next Greater Element
    // Using a stack -> pop,  ans, push
    stack<int> st;
    int pgi[n - 1];
    pgi[0] = 1;
    st.push(0);
    for(int i = 0; i < n; i++){
        // pop all the element smaller than arr[i] 
        while(st.size() > 0 && arr[st.top()] <= arr[i]){
            st.pop();
        }
        // marks ans in nge
        if(st.size() == 0) pgi[i] = -1;
        else pgi[i] = st.top();

        // push arr[i]
        st.push(i);
    }
    for(int i = 0; i < n; i++){
        pgi[i] = i - pgi[i];
    }
    for(int i = 0; i < n; i++){
        cout << pgi[i] << " ";
    }
    cout << endl;
    return 0;
}