#include <iostream>

using namespace std;

void field_init(char matrix[3][3]){
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            matrix[i][j]='.';
}

void print_field(char matrix[3][3]){
    for (int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

bool inputX(char matrix[3][3], int i, int j){
    if (i<1 or i>3 or j<1 or j>3){
        cout << "Error\n";
        return false;
    }
    if (matrix[2 - (j - 1)][i - 1]=='.') {
        matrix[2 - (j - 1)][i - 1] = 'X';
        print_field(matrix);
        return true;
    }
    else {
        cout << "Error\n";
        return false;
    }
}

bool inputO(char matrix[3][3], int i, int j){
    if (i<1 or i>3 or j<1 or j>3){
        cout << "Error\n";
        return false;
    }
    if (matrix[2 - (j - 1)][i - 1]=='.') {
        matrix[2 - (j - 1)][i - 1] = 'O';
        print_field(matrix);
        return true;
    }
    else {
        cout << "Error\n";
        return false;
    }
}

bool checkX(char matrix[3][3]){
    int xcol=0, xrow=0;
    for(int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 'X')
                xcol++;
        }
        if (xcol == 3)
            return true;
        else xcol = 0;

        for (int k = 0; k < 3; k++) {
            if (matrix[k][i] == 'X')
                xrow++;
        }
        if (xrow == 3)
            return true;
        else xrow = 0;
    }
    return false;
}

bool checkO(char matrix[3][3]){
    int ocol=0, orow=0;
    for(int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 'O')
                ocol++;
        }
        if (ocol == 3)
            return true;
        else ocol = 0;

        for (int k = 0; k < 3; k++) {
            if (matrix[k][i] == 'O')
                orow++;
        }
        if (orow == 3)
            return true;
        else orow = 0;
    }
    return false;
}

int main() {
    char XO_field[3][3];
    int x, y;
    field_init(XO_field);
    print_field(XO_field);

    for (;;) {
        for (;;) {
            cout << "Input X coords(1-3, upwards):\n";
            cin >> x >> y;
            if (inputX(XO_field, x, y))
                break;
        }
        if(checkX(XO_field)){
            cout<< "X won!";
            break;
        }
        for(;;){
            cout << "Input O coords(1-3, upwards):\n";
            cin >> x >> y;
            if(inputO(XO_field, x, y))
                break;
            }
        if(checkO(XO_field)){
            cout<< "O won!";
            break;
        }
    }
}
