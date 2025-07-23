#include <iostream>
using namespace std;
void lower(string &s, int i);
int count_vowel(string s, int i);
int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    int l = str.length();
    lower(str, l - 1); // Convert string to lowercase
    cout << "The vowels in the string: " << count_vowel(str, l - 1) << endl;
    return 0;
}
void lower(string &s, int i) {
    if (i < 0) return; // Base case
    lower(s, i - 1); // Recursive call
    if (s[i] >= 'A' && s[i] <= 'Z') {
        s[i] += 32; // Convert uppercase to lowercase
    }
}
int count_vowel(string s, int i) {
    if (i < 0) return 0; // Base case: no more characters to process
    // Check if the current character is a vowel
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
        return 1 + count_vowel(s, i - 1); // Add 1 for the vowel and continue recursion
    }
    return count_vowel(s, i - 1); // Skip and continue recursion
}