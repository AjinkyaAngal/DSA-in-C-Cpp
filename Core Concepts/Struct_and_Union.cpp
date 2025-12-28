//There is a shortcut #include <bits/stdc++.h> but cant be used on windows (as much I know)
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;

// Define structure
struct Student {
    string Name;
    char Grade;
    float Pointer;
};

int main() {
    
    // Create object of structure
    Student Student1 = {"Ajinkya", 'A', 9.9};
    
    // Accessing structure members values
    cout << "Name: " << Student1.Name << endl;
    cout << "Grade: " << Student1.Grade << endl;
    cout << "Pointer: " << Student1.Pointer;

    return 0;
}

//Unione is Similar to Struct, the only difference is that Struct stores each variable inside it differently while Union stores the whole Unione together