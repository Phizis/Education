#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream text;
    text.open("C:\\Users\\Roman\\CLionProjects\\19.3_excel\\salary.txt");
    string person;

    if (!text.is_open()){
        cout << "File not found!";
        return -1;
    }
    int max=0, sum=0;

    while(!text.eof()) {
        string name, surname, date;
        int money;
        text >> name >> surname >> money >> date;

        if (max<money){
            max=money;
            person= name+" "+surname;
        }
        sum+=money;
    }
    cout << "Most paid person: " << person << " payment=" << max << " Total: " << sum;

    text.close();
}