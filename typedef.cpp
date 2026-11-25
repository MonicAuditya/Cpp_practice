#include <iostream>

typedef std::string str;
// the same can be used with using keyword
using i = int;

int main(){
    using std::cout;
    str text = "hello";
    i val = 24;
    cout << text << " " << val;
}