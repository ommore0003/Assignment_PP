#include <iostream>
using namespace std;

// Call by value: Swaps two integers using values
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue function: x = " << x << ", y = " << y << endl;
}

// Call by reference: Swaps two integers using references
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByReference function: x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Calling swapByValue function
    swapByValue(a, b);
    cout << "After swapByValue function: a = " << a << ", b = " << b << endl;

    // Calling swapByReference function
    swapByReference(a, b);
    cout << "After swapByReference function: a = " << a << ", b = " << b << endl;

    return 0;
}
