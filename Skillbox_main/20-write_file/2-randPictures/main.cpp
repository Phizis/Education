#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int H, W;
    srand(time(nullptr));
    cout << "Input Height:\n";
    cin >> H;
    cout << "Input weight:\n";
    cin >> W;

    ofstream file("C:\\tutorial-data\\pictures.txt");
    for(int i=0; i<W; i++) {
        for (int j = 0; j < H; j++) {

            file << rand()%2 << ' ';
        }
        file << endl;
    }


}
