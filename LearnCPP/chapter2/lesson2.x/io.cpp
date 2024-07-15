#include "io.h"
#include <iostream>
using namespace std;

int readNumber(){
    int x;
    cout << "enter a number: ";
    cin >> x;
    return x;
}

void writeAnswer(int a){
    cout << "the answer is: " << a << '\n';
}