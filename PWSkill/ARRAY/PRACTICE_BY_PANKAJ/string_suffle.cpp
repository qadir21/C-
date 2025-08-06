#include <iostream>
#include <cstring>
using namespace std;
int subseq(string, string[]);
int main() {
    string input;
    cout << "Enter a string:";
    cin >> input;
    string *output = new string[100]; // Dynamically allocate an array to store subsequences
    int count = subseq(input, output); // Get the total number of subsequences
    for (int i = 0; i < count; i++) {
        cout << output[i] << endl;
    }
    delete[] output; // Free the dynamically allocated memory
    return 0;
}
int subseq(string x, string y[]) {
    if (x.size() == 0) {
        y[0] = ""; // Correct assignment
        return 1;
    }
    int small_size = subseq(x.substr(1), y); // Recursive call to get subsequences of the substring
    // Add the first character of the current string to each subsequence generated so far
    for (int i = 0; i < small_size; i++) {
        y[i + small_size] = x[0] + y[i];
    }
    return 2 * small_size; // Total number of subsequences
}