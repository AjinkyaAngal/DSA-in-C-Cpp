#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Menu"<<endl<<"1. Hello" << endl << "2. World" << endl << "Enter your choice: " ;
    cin>>a;
    switch (a) {
    case 1:
        cout << "Hello";
        break;
    case 2:
        cout << "World";
        break;
    default:
        cout << "Bye!";
    }
    return 0;
}