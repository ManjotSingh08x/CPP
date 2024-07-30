#include <iostream>
#include <string>
#include <string_view>
using namespace std;


string getName(int personNumber){
    string name{};
    cout << "Enter the name of person #" << personNumber << ": ";
    getline(cin >> ws, name);
    return name;
}

int getAge(string_view name){
    int age;
    cout << "Enter the age of " << name << ": ";
    cin >> age;
    return age;
}

void printLarger(string_view name1, int age1, string_view name2, int age2){
    if (age1 > age2){
        cout << name1 << " (age " << age1 << ") is older than " <<
        name2 << " (age " << age2 << ")." << endl;
    } else if (age1 < age2){
        cout << name2 << " (age " << age2 << ") is older than " <<
        name1 << " (age " << age1 << ")." << endl;
    } else if (age1 == age2){
        cout << "Both have the same age. " << endl;
    }
}

int main() {
    string name1 = getName(1);
    int age1 = getAge(name1);
    string name2 = getName(2);
    int age2 = getAge(name2);

    printLarger(name2, age2, name1, age1);
    return 0;
}