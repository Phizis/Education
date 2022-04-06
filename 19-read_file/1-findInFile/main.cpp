#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream text;
    string word;
    vector<string> buffer;
    int t=0;
    text.open("C:\\Users\\Roman\\CLionProjects\\19.1_findInFile\\text.txt");


    while(!text.eof()) {
        string curr;
        text >> curr;
        buffer.push_back(curr);
    }

    cout << "What you want to find?\n";
    cin >> word;

    for(int i=0; i<buffer.size();i++){
        if (word==buffer[i])
            t++;
    }

    cout << t;
    text.close();
}
