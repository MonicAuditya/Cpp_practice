#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using std::cout;
    using namespace first;
    cout << x << std::endl;
    cout << second::x;
}