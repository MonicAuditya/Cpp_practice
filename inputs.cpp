#include <iostream>

int main(){
    using namespace std;
    cout << "Enter your Name: ";
    string name;
    getline(cin >> ws , name);
    cout << '\n' << "hello " << name;
}