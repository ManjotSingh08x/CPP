#include <iostream>
using namespace std;

template <typename T>
struct Triad{
    T a {};
    T b {};
    T c {};
};
template <typename T>
void print(Triad<T> a){
    cout<<'['<<a.a<<", "<<a.b<<", "<<a.c<<']';
}
template <typename T>
Triad(T, T, T) -> Triad<T>;

int main() {
    Triad t1{ 1, 2, 3}; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6}; // note: uses CTAD to deduce template arguments
	print(t2); 
    return 0;
}