#include <iostream>
using namespace std;

int main() {
    int mas[5][5];

    for (int i = 0; i < 25; i++)
        mas[i/5][abs((i/5)%2 * 4 - i%5)] =i;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}
