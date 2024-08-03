#include <iostream>
using namespace std;
#define Question 3

#if Question == 1
int main() {
    for(int i = 0; i <= 20; i += 2){
        cout << i << ' ';
    }
    return 0;
}
#endif

#if Question == 2
int sumTo(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int a = sumTo(1000);
    cout << a;
}
#endif

#if Question == 3
void fizzBuzz(int n){
    for(int i = 1; i <= n; i++){
        if (i%3 && i%5 && i%7)
            cout << i;
        if (!(i%3))
            cout << "fizz";
        if (!(i%5))
            cout << "buzz";
        if (!(i%7))
            cout << "pop";
        cout << '\n';
    }
}
int main(){
    fizzBuzz(150);
}

#endif