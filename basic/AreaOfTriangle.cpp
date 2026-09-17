#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"Enter base of triangle : ";
    cin>>base;
    int height;
    cout<<"Enter height of triangle : ";
    cin>>height;
    float Area = 1/2*base*height;
    cout<<"Area of triangle is : "<<Area;
    return 0;
}