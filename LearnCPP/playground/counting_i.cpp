#include <iostream>
#include <string>
using namespace std;

int countI(string intro){
    int counter = 0;
    for (int i = 0; i < static_cast<int>(intro.length()) - 1; i++ ){
        if (intro[i] == 'I' && intro[i + 1] == ' ')
            counter++;
    }
    return counter;
}

int main() {
    string intro = "Hello my name is --. I am from New Delhi \
     I like TV shows and animes \
     I am interested in the working of optical fibre cables \
     I am keen in table tennis and football \
     I look forward to learn somethinga about billiards.\
     I follow cricket a lot.\
     I am interested in the studnet council \
     I look forward to having a great time with my batchmates and seniors.";
    int count = countI(intro);
    cout << "Number of I's: " << count;
}
