#include <iostream>
using namespace std;

// Input function returning pointer
int* arrayInput(int num)
{
    int* arr = new int[num];  // dynamic allocation

    for(int i = 0; i < num; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    return arr;  // returning pointer
}

// Output function
void arrayOutput(int* arr, int num)
{
    
    cout << "Array Elements: ";
    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "How long the array gonna be?: ";
    cin >> num;

    int* arr = arrayInput(num);  // receive pointer
    cout<<"Array has "<<num<<" elements."<<endl;
    arrayOutput(arr, num);

    delete[] arr;  // VERY IMPORTANT (avoid memory leak)

    return 0;
}
