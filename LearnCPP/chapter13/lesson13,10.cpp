#include <iostream>
using namespace std;

struct Revenue {
    int adsWatched {};
    float clickPercentage {};
    float averageEarning {};
};

void printRevenue(Revenue& revenue){
    cout << "adswatched: " << revenue.adsWatched;
    cout << " clickPercentage: " << revenue.clickPercentage*100 << "%";
    cout << " averageEarning: $" << revenue.averageEarning << endl;
}

int main() {
    Revenue a{1342, 0.12, 0.01};
    printRevenue(a);
    cout << "Total Earnings: $"<< a.adsWatched*a.clickPercentage*a.averageEarning;
    return 0;
}