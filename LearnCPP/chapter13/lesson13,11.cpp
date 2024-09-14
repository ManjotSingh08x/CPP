#include <iostream>
using namespace std;
struct Fraction{
    int num {};
    int denom {1};
};
Fraction getFraction(){
    int a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout<< "Enter denominator: ";
    cin >> b;
    return {a, b};
}
Fraction multiply(Fraction& a, Fraction& b){
    return {a.num * b.num, a.denom * b.denom};
}

int main() {
    Fraction a {getFraction()};
    cout << "Enter another fraction: " << '\n';
    Fraction b {getFraction()};
    Fraction c = multiply(a, b);
    cout << c.num << '/' << c.denom << endl;
    return 0;
}