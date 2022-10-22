#include <iostream> 

namespace foo
{
    int doSomething (int x, int y)
    {
        return x - y;
    }
}

namespace coo{
    int doSomething(int x , int y)
    {
        return x + y;
    }
}


int main(){
    std::cout << foo::doSomething(4, 2) << std::endl ;
    return 0;
}

