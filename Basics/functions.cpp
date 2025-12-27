#include <iostream>
using namespace std;

// Function with no parameters and no return value
void greet() {
    cout << "Welcome to C++ Programming!" << endl;
}

// Function with parameters and a return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    
    // Calling the greet function
    greet();

    // Calling the multiply function
    int result = multiply(4, 5);
    cout << "Multiplication result: " << result << endl;

    return 0;
}