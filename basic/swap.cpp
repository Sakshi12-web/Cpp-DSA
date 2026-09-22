#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter your first number : ";
    cin>>a;
    cout<<"Enter your second number : ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
    return 0;
}