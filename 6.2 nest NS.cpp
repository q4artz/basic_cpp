#include <string>
#include <iostream>
using namespace std;

namespace foo {
    namespace goo {
        int print(int x , int y){
            return x + y ;
        }
    }
}

int main(){

 cout << foo::goo::print(2,5);


}