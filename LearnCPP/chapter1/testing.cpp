#include <iostream>


int main()
{
    // define an integer variable named x
    int x; 
    int y;
    int z;// this variable is uninitialized

 // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    return 0;
}