#include <iostream>

int main(){
    const int y (6);
    const int z (1);
    int B {};
    int add (y + z);
    {
        int add = B ;
    }

    std::cout << B << std::endl ;
}
