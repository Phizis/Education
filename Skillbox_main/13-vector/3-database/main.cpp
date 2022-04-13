#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> database(0);
    int newData;
    int j=0;

    cout << "Enter new data:\n";

    for (int i=0; i<20; i++) {
        cin >> newData;
        if (newData==-1)
            break;
        database.push_back(newData);
    }

    if (newData!=-1) {
        for (int i = 0; i < database.size(); i++) {
            cin >> newData;
            if (newData == -1) {
                j = i;
                break;
            }
            database[i] = newData;
            if (i == database.size() - 1)
                i = 0;
        }
    }

    if (database.size()!=database.capacity()) {
        for (int i = j; i < database.size(); i++)
            cout << database[i] << " ";
        for (int i=0; i<j; i++)
            cout << database[i] << " ";
    }
    else
        for (int i=0; i<database.capacity(); i++)
            cout<< database[i] << " ";
}