#include <iostream>
#include <string> 
#include <algorithm> 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    string number;

    cout << "enter a number: "  << endl ;
    getline(cin,number);
    
    int i = atoi(number.c_str());                                // https://www.cplusplus.com/reference/cstdlib/

    cout << "this is your number: " << number << endl;
    cout << endl ;

    return 0;
}