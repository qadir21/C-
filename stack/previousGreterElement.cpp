#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    // Next Greater Element
    // Using a stack -> pop,  ans, push
    stack<int> st;
    int pge[n - 1];
    pge[0] = -1;
    st.push(arr[0]);
    for(int i = 0; i < n; i++){
        // pop all the element smaller than arr[i] 
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop();
        }
        // marks ans in nge
        if(st.size() == 0) pge[i] = -1;
        else pge[i] = st.top();

        // push arr[i]
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout << pge[i] << " ";
    }
    cout << endl;
    return 0;
}