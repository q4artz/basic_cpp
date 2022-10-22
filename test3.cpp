#include <iostream>
#include <string> 
#include <algorithm> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int I(int number){
    cout << "please enter the amout of cars you have: \n" ;
    cin >> number ;
    cin.ignore();
}

int main(){
    int number;
    string cars;
    string car;

    cout << I << endl ;

    string* pCar = new string[number] ;

    for(int i = 0 ; i <= number ; i++){
        cout << "please enter car # " << i+1 << endl;
        getline(cin,pCar[i]);
    }

    cout<< "here is your garage: " << endl;

    for(int i = 0 ; i <= number ; i++){
        cout << "parking spot# " << i+1 << "" << pCar[i] << endl;
    }
    return 0;
}
