#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    string number;

    cout << "Input integer part:";
    cin >> number;
    n=stod(number);

    cout << "Input fraction part:";
    cin >> number;
    n+=stod(number)/pow(10, number.length());

    cout << n;
}
