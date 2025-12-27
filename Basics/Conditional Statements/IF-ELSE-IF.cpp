#include <iostream>
using namespace std;
int main() {

    int num;
    cin>>num;

    if(num%2==0 && num%3==0){
        cout<<"Number is divisible by 2 and 3!!";
    }
    else if(num%2==0 || num%3==0){
        cout<<"Number is either divisible by 2 or 3!!";
    }
    else cout<<"Number is neither divisible by 2 nor 3!!";

}