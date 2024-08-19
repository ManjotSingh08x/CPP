#include <iostream>
using namespace std;

int main() {
    int x = 5;
    //int* ptr1;
    int* ptr2{};
    int* ptr3 = &x;

    //cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;
    //cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;
    return 0;
}