#include <iostream>
using namespace std;

void input( int matrix[4][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];
}

void print(int matrix[][4]){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << " ";
    cout << endl;
    }
}

int main() {

    int matrix1[4][4];

    cout << "Input matrix1:\n";
    input (matrix1);

    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
            if (i!=j)
                matrix1[i][j]=0;
    
    print(matrix1);
}