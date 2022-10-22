#include <iostream>
using namespace std ;

int main(){
    const int x = {5};
    {
        cout << x << endl ;

        constexpr int x {0};

        x = 10;

        cout << x << endl ;
    }
    cout << x << "\n";
    return 0;
}