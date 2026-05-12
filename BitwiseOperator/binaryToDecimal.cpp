#include<iostream> 
using namespace std;
int bianryToDecimal(string& binary){
    int n = binary.size();
    int result = 0;
    for(int i = n - 1; i >= 0; i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num * (1 << (n - i - 1));
    }
    return result;
}

string decimalToBinary(int num){
    string result  = " ";
    while(num > 0){
        if(num % 2 == 0){
            // even 
            result = "0" + result;
        }else{
            // odd
            result = "1" + result;
        }
        num /= 2;
    }
    return result;
}

int main(){
    // string str;
    // getline(cin, str);
    // cout << bianryToDecimal(str);
    // cout << endl;
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}