#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// Function to convert Decimal to Binary
string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary == "" ? "0" : binary;
}
// Function to convert Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        decimal += (binary[i] - '0') * pow(2, power);
        power++;
    }
    return decimal;
}
// Function to convert Decimal to Octal
string decimalToOctal(int n) {
    string octal = "";
    while (n > 0) {
        octal = to_string(n % 8) + octal;
        n /= 8;
    }
    return octal == "" ? "0" : octal;
}
// Function to convert Octal to Decimal
int octalToDecimal(string octal) {
    int decimal = 0;
    int power = 0;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * pow(8, power);
        power++;
    }
    return decimal;
}
// Function to convert Decimal to Hexadecimal
string decimalToHexadecimal(int n) {
    string hex = "";
    string hexChars = "0123456789ABCDEF";
    while (n > 0) {
        hex = hexChars[n % 16] + hex;
        n /= 16;
    }
    return hex == "" ? "0" : hex;
}
// Function to convert Hexadecimal to Decimal
int hexadecimalToDecimal(string hex) {
    int decimal = 0;
    int power = 0;
    for (int i = hex.length() - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * pow(16, power);
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * pow(16, power);
        }
        power++;
    }
    return decimal;
}
int main() {
    int choice;
    do {
        cout << "\nConversion Options:\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Decimal to Octal\n";
        cout << "4. Octal to Decimal\n";
        cout << "5. Decimal to Hexadecimal\n";
        cout << "6. Hexadecimal to Decimal\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            int n;
            cout << "Enter a decimal number: ";
            cin >> n;
            cout << "Binary: " << decimalToBinary(n) << endl;
        } else if (choice == 2) {
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            cout << "Decimal: " << binaryToDecimal(binary) << endl;
        } else if (choice == 3) {
            int n;
            cout << "Enter a decimal number: ";
            cin >> n;
            cout << "Octal: " << decimalToOctal(n) << endl;
        } else if (choice == 4) {
            string octal;
            cout << "Enter an octal number: ";
            cin >> octal;
            cout << "Decimal: " << octalToDecimal(octal) << endl;
        } else if (choice == 5) {
            int n;
            cout << "Enter a decimal number: ";
            cin >> n;
            cout << "Hexadecimal: " << decimalToHexadecimal(n) << endl;
        } else if (choice == 6) {
            string hex;
            cout << "Enter a hexadecimal number: ";
            cin >> hex;
            cout << "Decimal: " << hexadecimalToDecimal(hex) << endl;
        } else if (choice == 7) {
            cout << "Exiting the program.\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
    return 0;
}