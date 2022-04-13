#include <iostream>
using namespace std;

int dog (string email){
    for (int i=0; i < email.length(); i++)      //find @
        if (email[i] == '@')
            return (i-1);
        else
            if (i==email.length())
                return -1;
}

bool symbs_check (string email, int before){
    string spec = "!#$%&'*+-/=?^_`{|}~";
    bool flagb, flaga;

    for (int i = 0; i <= before; i++) {
        if ((email[i] >= 'a' and email[i] <= 'z') or email[i] == '.' or email[i] == '-' or (email[i] >= '0' and email[i] <= '9')
                                                                                           or (email[i] >= 'A' and email[i] <= 'Z')){
            flagb = true;
        }
        else{
            for (int j = 0; j< spec.length(); j++){ //check spec symbs
                if (email[i] == spec[j] ){
                    flagb = true;
                    break;
                }
                else flagb = false;
            }
            if (!flagb)
                return false;
        }
    }

    for (int i = before+2; i < email.length(); i++) {
        if ((email[i] >= 'a' and email[i] <= 'z') or email[i] == '.' or email[i] == '-' or (email[i] >= '0' and email[i] <= '9')
                                                                                           or (email[i] >= 'A' and email[i] <= 'Z'))
            flaga = true;
        else return false;
    }
    if (flaga and flagb) return true;
    else return false;
}

bool dot_check (string email, int before) {
    int dot=0, minus=0;
    if (email[0] == '.' or email[0] == '-' or email[before+2] == '.' or email[before+2] == '-' or email[email.length()-1]=='.' or email[email.length()-1] == '-') //check firstS dot
        return false;

    for (int i = 2; i <= before; i++) {  //check two dots in a row
        if (email[i] == '.' and email[i - 1] == '.')
            return false;
    }

    for (int i = before + 2; i < email.length(); i++) { //after_dog
        if (email[i] == '.')
            dot++;
        if (dot > 1)
            return false;
    }
    return true;
}

int main() {
    string email;
    cout << "Your email: ";
    cin >> email;

    if ( dog(email) <= 64 and dog(email) >=0 and (email.length() - (dog(email)+1) <= 63)
                                                 and (email.length() - (dog(email)+1) >= 0)) {
        if (dot_check(email, dog(email)) and symbs_check(email, dog(email)))
            cout << "Yes";
        else cout << "No";
    }
    else cout << "No";
}
