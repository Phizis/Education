#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    float speed=0;
    float delta;
    char text[100];
    do{
        cout << "Input delta:\n";
        cin >> delta;
        speed+=delta;
        if (speed>150) {
            cout << "Over speed!\n";
            speed-=delta;
        }
        sprintf(text, "Your actual speed: %.1f\n", speed);
        cout << text;
    }
    while (speed > 0);
    cout << "You stopped.";
}
