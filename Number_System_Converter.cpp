#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int decimal) {
    string hexadecimal = "";
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal = to_string(remainder) + hexadecimal;
        else
            hexadecimal = char('A' + remainder - 10) + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(string hexadecimal) {
    int decimal = 0;
    int power = 0;
    for (int i = hexadecimal.length() - 1; i >= 0; i--) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
            decimal += (hexadecimal[i] - '0') * pow(16, power);
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
            decimal += (hexadecimal[i] - 'A' + 10) * pow(16, power);
        power++;
    }
    return decimal;
}

// Function to convert decimal to octal
string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal > 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}

// Function to convert octal to decimal
int octalToDecimal(string octal) {
    int decimal = 0;
    int power = 0;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * pow(8, power);
        power++;
    }
    return decimal;
}

int main() {
    int choice;
    cout << "Choose conversion: \n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Decimal to Octal\n";
    cout << "3. Decimal to Hexadecimal\n";
    cout << "4. Binary to Decimal\n";
    cout << "5. Binary to Octal\n";
    cout << "6. Binary to Hexadecimal\n";
    cout << "7. Octal to Decimal\n";
    cout << "8. Octal to Binary\n";
    cout << "9. Octal to Hexadecimal\n";
    cout << "10. Hexadecimal to Decimal\n";
    cout << "11. Hexadecimal to Binary\n";
    cout << "12. Hexadecimal to Octal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    int num;
    string str;
    switch (choice) {
        case 1:
            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Binary equivalent: " << decimalToBinary(num) << endl;
            break;
        case 2:
            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Octal equivalent: " << decimalToOctal(num) << endl;
            break;
        case 3:
            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Hexadecimal equivalent: " << decimalToHexadecimal(num) << endl;
            break;
        case 4:
            cout << "Enter binary number: ";
            cin >> str;
            cout << "Decimal equivalent: " << binaryToDecimal(str) << endl;
            break;
        case 5:
            cout << "Enter binary number: ";
            cin >> str;
            cout << "Octal equivalent: " << decimalToOctal(binaryToDecimal(str)) << endl;
            break;
        case 6:
            cout << "Enter binary number: ";
            cin >> str;
            cout << "Hexadecimal equivalent: " << decimalToHexadecimal(binaryToDecimal(str)) << endl;
            break;
        case 7:
            cout << "Enter octal number: ";
            cin >> str;
            cout << "Decimal equivalent: " << octalToDecimal(str) << endl;
            break;
        case 8:
            cout << "Enter octal number: ";
            cin >> str;
            cout << "Binary equivalent: " << decimalToBinary(octalToDecimal(str)) << endl;
            break;
        case 9:
            cout << "Enter octal number: ";
            cin >> str;
            cout << "Hexadecimal equivalent: " << decimalToHexadecimal(octalToDecimal(str)) << endl;
            break;
        case 10:
            cout << "Enter hexadecimal number: ";
            cin >> str;
            cout << "Decimal equivalent: " << hexadecimalToDecimal(str) << endl;
            break;
        case 11:
            cout << "Enter hexadecimal number: ";
            cin >> str;
            cout << "Binary equivalent: " << decimalToBinary(hexadecimalToDecimal(str)) << endl;
            break;
        case 12:
            cout << "Enter hexadecimal number: ";
            cin >> str;
            cout << "Octal equivalent: " << decimalToOctal(hexadecimalToDecimal(str)) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
