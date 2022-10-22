#include <iostream>


namespace goo::foo
{
    int print(int x,int y)
    {
        return x + y ;
    }
}

int main(){
    namespace active = goo::foo ;

    std::cout << active::print(5,3) ;
    return 0;
}