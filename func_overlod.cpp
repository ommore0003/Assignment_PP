#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to concatenate two strings
string add(string a, string b) {
    return a + " " + b;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;
    string str1 = "Hello", str2 = "World";

    // Call the appropriate function based on the number and type of arguments
    cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;
    cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is: " << add(num1, num2, num3) << endl;
    cout << "Concatenated string: " << add(str1, str2) << endl;

    return 0;
}
