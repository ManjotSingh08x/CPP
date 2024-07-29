#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter your full name: ";
    string name{};
    getline(cin >> ws, name);
    cout << name;
    return 0;
}
