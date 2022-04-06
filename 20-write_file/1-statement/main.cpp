#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name, surname, date; //добавить кучу проверок
    int payment;

    ofstream file("C:\\tutorial-data\\file.txt", ios::app);
    for(;;) {
        cout << "Name:\n";
        cin >> name;
        if (name == "-1")
            break;
        else
            file << name + ' ';
        cout << "Surname:\n";
        cin >> surname;
        if (surname == "-1")
            break;
        else
            file << surname+' ';
        cout << "Date:\n";
        cin >> date;
        if (date == "-1")
            break;
        else
            file << date+' ';
        cout << "Payment:\n";
        cin >> payment;
        if (payment == -1)
            break;
        else
            file << payment << endl;
    }
    file.close();
}
