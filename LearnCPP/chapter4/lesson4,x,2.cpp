
#include <iostream>
using namespace std;

//all calculations use SI unit system
const double gravity_constant = 9.8;

// prompts the user to enter an intial hieght of the tower
double inputHeight(){
    double height;
    cout << "Enter the height of the tower in meters: ";
    cin >> height;
    return height;
}

// uses simplified version of s = ut + 1/2at^2 kinematics formula 
// to provide height of ball at any time in seconds
// assumes negative values to be zero
double ballHeight(int time, double initialHeight){
   double distanceCovered = gravity_constant * time * time / 2;
   double ballHeight = initialHeight - distanceCovered;
   if (ballHeight <= 0)
        return 0.0;
   else 
        return ballHeight;
}

// provides a output format to display the height of ball in terminal at time t
void printHeight(int time, double initialHeight) {
    double height = ballHeight(time, initialHeight);
    if (height == 0.0)
        cout << "At " << time << " seconds, the ball is on the ground." << endl;
    else 
        cout << "At " << time << " seconds, the ball is at height: " 
        << height << " meters\n";
}

int main() {
    double initialHeight = inputHeight();

    // according to question we are concerned with positions at time 1-5 seconds only
    // at this time, the course hasnt introduced loops so we need to duplicate code
    printHeight(0, initialHeight);
    printHeight(1, initialHeight);
    printHeight(2, initialHeight);
    printHeight(3, initialHeight);
    printHeight(4, initialHeight);
    printHeight(5, initialHeight);
    return 0;
}