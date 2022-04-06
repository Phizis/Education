#include <iostream>
using namespace std;

void input( int matrix[4][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];
}

bool m_check(int matrix1 [][4], int matrix2[][4]){
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if(matrix1[i][j]!=matrix2[i][j])
                return false;
    return true;
}

int main() {

    int matrix1[4][4], matrix2[4][4];

    cout << "Input matrix1:\n";
    input (matrix1);

    cout << "Input matrix2:\n";
    input (matrix2);

    if (m_check(matrix1, matrix2))
        cout << "Equal";
    else
        cout << "Not equal";
}
