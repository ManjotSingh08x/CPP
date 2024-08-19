#include <iostream>
#include <map>
#include <string>
using namespace std;



string numberToName(int n){
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    string under20[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"};
    string tens[] = {"","Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if(n <= 10)
        return ones[n];
    else if (n <= 20)
        return under20[n-10];
    else if (n <= 99)
    {
        int onesPlace = n % 10;
        if (onesPlace == 0)
            return tens[n/10 - 1];
        else
            return tens[n/10-1] + "-" + ones[onesPlace];
    } else 
        return "";
}

string digitParser(int n){
    if (n <= 99)
        return numberToName(n);
    else if (n <= 999)
        return numberToName(n/100) + " Hundred " + digitParser(n % 100);
    else if (n <= 999'999)
        return digitParser(n/1000) + " Thousand " + digitParser(n % 1000);
    else if (n <= 999'999'999)
        return digitParser(n/1'000'000) + " Million " + digitParser(n % 1'000'000);
    else 
        return "";
}

int main() {
    int answer = 0;
    do {
        cout << "Enter a number: (0 to exit) ";
        cin >> answer;
        cout << digitParser(answer) << endl;
    } while (answer > 0);
    return 0;
}