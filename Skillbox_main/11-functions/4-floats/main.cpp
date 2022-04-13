#include <iostream>
using namespace std;

bool check_number (string number ){
    bool numbs=false;
    int dot=0;

    for (int i=0; i<number.length(); i++){

        //проверка, что значения входят в допустимый диапазон
        if (number[i]!='-' and number[i]!='.' and (number[i]<'0' or number[i]>'9')){
            return false;
        }

        //проверка что вообще есть цифры
        if (number[i]>='0' and number[i]<='9')
            numbs=true;

        //количественная проверка на точки
        if (number [i]=='.'){
            dot++;
            if (dot>1)
                return false;
        }

        if (i > 0 and number [i]=='-')
            return false;
    }

    if (numbs)
        return true;
    else return false;

}

string mantissa(string number){
    string mantissa;
    for ( int i=0; i<number.length(); i++){
        if (number[i]=='.'){
            return mantissa;
        }
        mantissa+=number[i];
    }
    return mantissa;
}

string fraction(string number) {
    string fraction;
    bool dot = false;
    for (int i = 0; i < number.length(); i++) {
        fraction += number[i];
        if (number[i] == '.') {
            fraction = "";
            dot = true;
        }
    }
    if (dot)
        return fraction;
    else{
        fraction="0";
        return fraction;
    }
}

string compare (string number1, string number2){
    if (mantissa(number1).length() > mantissa(number2).length())
        return "More";
    else
        if (mantissa(number1).length() < mantissa(number2).length())
            return "Less";
        else {
            for (int i = 0; i < mantissa(number1).length(); i++) {
                if (mantissa(number1)[i] > mantissa(number2)[i])
                    return "More";
                else
                    if (mantissa(number1)[i] < mantissa(number2)[i])
                    return "Less";
            }
        }
        for (int j=0; j < fraction(number1).length(); j++){
            if (fraction(number1)[j] > fraction(number2)[j])
                return "More";
            else
                if(fraction(number1)[j] < fraction(number2)[j])
                    return "Less";
                else{
                    if ( (fraction(number1).length()-1) == j and (fraction(number2).length()-1) == j)
                        return "Equal";
                    if ( (fraction(number1).length()-1) == j and (fraction(number2).length()-1) > j ) {
                        for (; j < fraction(number2).length(); j++) {
                            if (fraction(number2)[j] != '0')
                                return "Less";
                        }
                        return "Equal";
                    }
                    if ( (fraction(number2).length()-1) == j and (fraction(number1).length()-1) > j ){
                        for ( ; j< fraction(number1).length(); j++) {
                            if (fraction(number1)[j] != '0') {
                                return "Less";
                            }
                        }
                        return "Equal";
                    }
                }
        }
}

int main() {
string number1, number2;

cout << "Enter 1st number: ";
for (;;) {
    cin >> number1;
    if (!check_number(number1))
        cout << "Error! Try again.\n";
     else break;
}

cout << "2nd number:\n";
for (;;) {
    cin >> number2;
    if (!check_number(number2))
        cout << "Error! Try again.";
    else break;
}

if (number1[0]=='-' and number2[0]!='-')
    cout << "Less1";
else
    if (number1[0]!='-' and number2[0]=='-')
        cout << "More1";
    else
        if (number1[0]!='-' and number2[0]!='-')
            cout << compare(number1, number2);
        else
            if (compare(number1, number2) == "Less2")
                cout << "More2";
            else
                if (compare(number1, number2) =="More3")
                    cout << "Less3";
                else cout << "Equal";
}