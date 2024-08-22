#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter your full name: ";
    string name{};
    string name2{};
    // cin >> name >> name2;
    getline(cin >> ws, name);
    // cout << name << name2;
    return 0;
}
