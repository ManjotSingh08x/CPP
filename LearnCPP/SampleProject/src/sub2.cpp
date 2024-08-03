#include "../include/header.h"
#include <iostream>
using namespace std;

int printThefactorial(int a){
    doSomething();
    int counter = 1;
    for(int i =1; i <= a; i++){

        cout << i << '\n';
        counter *= i;
    }
    return counter;
}