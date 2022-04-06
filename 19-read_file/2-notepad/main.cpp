#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream text;
    string path;
    char buffer[512];

    cout << "File path:\n";
    cin >> path;


    text.open(path, ios::binary);

    if (!text.is_open()){
        cout << "ERROR!";
        return -1;
    }

    while(!text.eof()) {
        text.read(buffer, sizeof (buffer)-1);
        buffer[text.gcount()] = 0;
        cout << buffer;
    }
    text.close();
}
