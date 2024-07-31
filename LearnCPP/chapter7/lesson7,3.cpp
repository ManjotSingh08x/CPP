#include <iostream>
using namespace std;

int main() {
    int smaller{}; // smaller variable starts here 
    int larger {}; // larger varible starts here
    cout << "Enter an integer: ";
    cin >> smaller;
    cout << "Enter a larger integer: ";
    cin >> larger;
    if (smaller > larger)
    {
        cout << "Swapping the values \n";
        int temp; // temp starts here 
        temp = smaller;
        smaller = larger;
        larger = temp;
    } // temp is destroyed here
    cout << "The smaller value is " << smaller << endl;
    cout << "The larger value is " << larger << endl;
    return 0;
} // smaller and larger variables are destroyed here