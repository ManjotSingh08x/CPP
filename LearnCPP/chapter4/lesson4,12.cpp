#include <iostream>
using namespace std;


//version 1 using explicit type conversion
int main() {
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "You entered \'" << ch << "\', which has ASCII value of " 
    << static_cast<int>(ch) << endl;
    return 0;
}

//version 2 using implicit type conversion
int printAsInt(int a){
    return a;
}

int main(){
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "You entered \'" << ch << "\', which has ASCII value of " 
    << printAsInt(ch) << endl;
    return 0;
}

//version 3 using arithmetic for implicit conversion
int main(){
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "You entered \'" << ch << "\', which has ASCII value of " 
    << ch + 0 << endl;
    return 0;
}