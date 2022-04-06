#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string fish, fName;
    int count=0;
    cout << "What u wanna catch?\n";
    cin >> fName;

    ifstream river ("C:\\tutorial-data\\river.txt");
    ofstream basket ("C:\\tutorial-data\\basket.txt", ios::app);

    if (!river.is_open()){
        cout << "File not found!";
        return -1;
    }
    if (!basket.is_open()){
        cout << "File not found!";
        return -1;
    }

    while (!river.eof()) {
        river >> fish;
        if (fName == fish) {
            basket << fName << endl;
            count++;
        }
    }
    if (count==0)
        cout << "There is not such fish here ;(";
    else cout << count;

    river.close();
    basket.close();
}
