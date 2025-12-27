#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    do {
        cout << count+1 << " ";
        count++; 
    } while (count < 5);
    return 0;
}