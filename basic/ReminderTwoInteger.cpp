#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your first number:";
    cin>>a;
    int b;
    cout<<"Enter your second number:";
    cin>>b;
    int r = a % b;
    cout<<"Reminder of "<<a<<" is: "<<r;
    return 0;
}