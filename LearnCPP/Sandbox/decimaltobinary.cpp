#include <iostream>
#include <vector> 
using namespace std;

void decimalToBinary(int a){
    vector<int> array;
    int quotient = a;
    int i = 0;
    while (quotient > 0){
        array.push_back(quotient%2);
        quotient /= 2;
    }
    int n = array.size();
    for(int i = n - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
}

int main() {
    decimalToBinary(88); //1011000
    return 0;
}