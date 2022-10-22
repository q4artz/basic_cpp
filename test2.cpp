#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void welcome(string user_name,int user_age) {
    cout << "Welcome to my program! "<<user_name<< endl;
    cout << "You are " << user_age <<" yo" << endl;
};

void goodbye() {
    cout << "Goodbye!" << endl;
};

int main()
{
    //functions
    string name;
    int age;

    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your age: " << endl;
    cin >> age;

    welcome(name,age);
    goodbye();

    cout << endl;
    return 0;
}