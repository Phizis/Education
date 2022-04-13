#include <iostream>
using namespace std;

void input( float matrix[4][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];
}

void print(float matrix[][4]){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {

    float matrix1[4][4];
    float mas[4], result[]{0, 0, 0, 0};

    cout << "Input matrix1:\n";
    input (matrix1);

    cout << "Input vector:\n";
    for(int i=0; i<4; i++)
        cin >> mas[i];

    for (int i=0; i<4; i++)
        for(int j=0; j<4; j++) {
            matrix1[i][j] *= mas[j];
            result[i]+= matrix1[i][j];
        }

    cout << "New matrix:" << endl;
    print(matrix1);

    cout << "Result vector:";
    for(int i=0; i<4; i++)
        cout << endl << result[i] << " ";
}