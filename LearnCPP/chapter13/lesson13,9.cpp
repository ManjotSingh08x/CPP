#include <iostream>
using namespace std;

struct Test {
    int a {};
    int b {3};
    int c {1};
};
Test& changetest(Test& test){
    test.a = 99;
    return test;
}

ostream& operator<<(ostream& out, Test& test){
    out << "a= "<< test.a << " b= " << test.b << " c= " << test.c << endl;
    return out;
}
int main() {
    Test first{};
    Test second = {1 , 4};
    Test third {.b = 9};
    cout << first << second << third;
    cout << changetest(second);
    
    return 0;
}