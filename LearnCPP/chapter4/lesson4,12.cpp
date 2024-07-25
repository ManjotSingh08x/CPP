#include <iostream>
using namespace std;
#define VERSION 2



//version 1 using explicit type conversion
#if VERSION == 1
int main() {
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "You entered \'" << ch << "\', which has ASCII value of " 
    << static_cast<int>(ch) << endl;
    return 0;
}
#endif

//version 2 using implicit type conversion
#if VERSION == 2
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
#endif

//version 3 using arithmetic for implicit conversion
#if VERSION == 3
int main(){
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "You entered \'" << ch << "\', which has ASCII value of " 
    << ch + 0 << endl;
    return 0;
}
#endif