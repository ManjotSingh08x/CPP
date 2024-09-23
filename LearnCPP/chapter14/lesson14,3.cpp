#include <iostream>
using namespace std;

struct IntPair{
    int a {};
    int b {};
    void print(){
        cout << "Pair(" << a << ", " << b << ")" << endl;
    }
    bool isEqual(const IntPair& p2){
        return (a == p2.a && b == p2.b);
    }
};

int main() {
    IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();
    cout << p1.isEqual(p2);
    return 0;
}