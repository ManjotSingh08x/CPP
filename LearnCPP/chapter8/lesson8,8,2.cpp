#include <iostream>
using namespace std;
#define Question 2

int g_size = 5;

#if Question == 1
int main() {

    int outer = g_size;
    while (outer > 0){
        int inner = outer;
        while (inner > 0){
            cout << inner << ' ';
            inner--;
        }
        cout << '\n';
        outer--;
    }
    return 0;
}
#endif

#if Question == 2
int main() {
    int outer = 1;
    while (outer <= g_size){
        int inner = g_size;
        while (inner > 0){
            if (inner > outer ){
                cout << "x ";
            } else {
                cout << inner << ' ';
            }
            inner--;
        }
        cout << '\n';
        outer++;
    }
}
#endif