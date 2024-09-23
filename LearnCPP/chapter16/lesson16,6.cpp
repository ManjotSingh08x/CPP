#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printArray(vector<T>& arr){
    for(size_t i = 0; i < arr.size(); ++i){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    vector arr{4, 6, 7, 3, 8, 2, 1, 9};
    printArray(arr);
    return 0;
}