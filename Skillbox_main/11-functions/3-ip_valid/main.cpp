#include <iostream>
using namespace std;

bool zero_check (string part){
    if (part.length()>1 and part[0]=='0')  //if first 0
        return false;
    return true;
}

bool range_check (string part){
    int number=0;
    for (int i=0; i<part.length(); i++){ //string to int
        number+=part[i]-'0';
        if (i!=part.length()-1) {
            number *= 10;
        }
    }
    if (number >= 0 and number <=255)
        return true;
    else return false;
}

int main() {
    string ip, part;
    cout << "Enter IP address:" <<endl;
    cin >> ip;
    int dots=0;
    bool flag = true;

    for (int i=0; i<ip.length(); i++){
        if (ip[i] >= '0' and ip[i] <= '9') {    //creating string "part"
            part += ip[i];
        }
        else {      //until dot
            dots++;
            if (part.length()==0 or part.length() > 3 or !range_check(part) or dots > 3 or !zero_check(part)){      //checking every part
                flag = false;
                break;
            }
            part="";    //clearing part - do not clear the last one because there was no dot
        }
    }

    if (dots<3 or !range_check(part) or !zero_check(part) or !flag )  //checking last part
        cout<< "No";    
    else cout << "Yes!";
}