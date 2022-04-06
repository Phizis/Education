#include <iostream>
using namespace std;

bool check_string (string first, string second, string third){
    for (int i=0; i<3; i++){
        if (first[i]!='X' and first[i]!='O' and first[i]!='.')
            return false;
        if (second[i]!='X' and second[i]!='O' and second[i]!='.')
            return false;
        if (third[i]!='X' and third[i]!='O' and third[i]!='.')
            return false;
    }
    return true;
}

int checkX(string line){ //X count
    int X=0;
    for ( int i=0; i<line.length(); i++)
        if (line [i]=='X')
            X++;
    return X;
}

int checkO(string line){ //O count
    int O=0;
    for ( int i=0; i<line.length(); i++)
        if (line [i]=='O')
            O++;
    return O;
}

bool check_Xwinstr(string won){ //XXX
    for (int i=0; i<won.length(); i++)
        if(won[i]!='X')
            return false;
    return true;
}

bool check_Owinstr(string won){ //OOO
    for (int i=0; i<won.length(); i++)
        if(won[i]!='O')
            return false;
    return true;
}

bool check_Xwincol(string first, string second, string third){         //X
    for (int i=0; i<3; i++){                                           //X
        if (first[i]=='X' and second[i]=='X' and third [i]=='X')       //X
            return true;
    }
    if (first[0]=='X' and second[1]=='X' and third[2]=='X') //diagjnal_X
        return true;
    if (first[2]=='X' and second[1]=='X' and third[0]=='X')
        return true;
    return false;
}

bool check_Owincol(string first, string second, string third){    //O
    for (int i=0; i<3; i++){                                      //O
        if (first[i]=='O' and second[i]=='O' and third [i]=='O')  //O
            return true;
    }
    if (first[0]=='O' and second[1]=='O' and third[2]=='O') //diagonal_O
        return true;
    if (first[2]=='O' and second[1]=='O' and third[0]=='O')
        return true;
    return false;
}

int main() {
    string first, second, third;
    int X, O;

    cout << "Enter 1st string:\n";
    cin >> first;
    cout << "Enter 2nd string:\n";
    cin >> second;
    cout << "Enter 3rd string:\n";
    cin >> third;

    if (!check_string(first,second,third) or first.length()>3 or second.length()>3 or third.length()>3){
        cout << "Incorrect1";
        return 0;
    }

    X = checkX(first) + checkX(second) + checkX(third) ;
    O = checkO(first) + checkO(second) + checkO(third);

    if (O > X or X!=O and X-1!=O ) {
        cout << "Incorrect2";
        return 0;
    }

    if (check_Xwinstr(first) or check_Xwinstr(second) or check_Xwinstr(third)) {
        if (O>=X) {
            cout << "Incorrect3";
            return 0;
        }
        cout << "Petya won";
        return 0;
    }
    if (check_Owinstr(first) or check_Owinstr(second) or check_Owinstr(third)){
        if (X > O){
            cout << "Incorrect4";
            return 0;
        }
        cout << "Vanya won";
        return 0;
    }
    if (check_Xwincol(first,second,third)){
        if (O>=X) {
            cout << "Incorrect5";
            return 0;
        }
        cout << "Petya won";
        return 0;
    }
    if (check_Owincol(first,second,third)){
        if (X > O){
            cout << "Incorrect6";
            return 0;
        }
        cout << "Vanya won";
        return 0;
    }
    cout << "Nobody";
}