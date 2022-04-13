#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char buffer[4];
    string path;

    cout << "File path:\n";
    cin >> path;

    ifstream text;
    text.open(path, ios::binary);

    if (!text.is_open()){
        cout << "File not found!";
        return -1;
    }

    text.read(buffer,sizeof (buffer));
    if (path.substr(path.length()-4)==".png")
        if(buffer[0]==-119)
            if(buffer[1]=='P')
                if(buffer[2]=='N')
                    if(buffer[3]=='G')
                        cout << "Its PNG!";
    text.close();
}