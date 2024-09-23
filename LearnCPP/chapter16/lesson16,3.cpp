#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printElement(vector<T>& arr, int index){
    if (index >= (int)size(arr) || index < 0){
        cout << "Invalid index" << endl;
    } else {
        cout << "The element has value " << arr[index] << endl;
    }
}
int main() {
    vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);
    return 0;
}