#include<iostream>
#include<string>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int noOfMatchesPlayed;
};

int main() {
    Cricketer cricketer[20];

    for(int i = 0; i < 20; i++) {
        cout << "Enter name : ";
        cin >> cricketer[i].name;

        cout << "Enter age : ";
        cin >> cricketer[i].age;

        cout << "Enter no. of matches played : ";
        cin >> cricketer[i].noOfMatchesPlayed;
    }

    return 0;
}