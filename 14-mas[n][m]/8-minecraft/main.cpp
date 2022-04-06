#include <iostream>

using namespace std;

void init( bool matrix[5][5][10]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            for (int k = 0; k < 10; k++)
                matrix[i][j][k] = false;
}

void print(bool matrix[][5][10]){
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << matrix[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {

    bool matrix[5][5][10];
    init(matrix);

    int n, cut;

    cout << "Input high for landscape(0-9):\n";
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) {
            cin >> n;
            if(n>-1 and n<10) {
                for (int k = 0; k <= n; k++)
                    matrix[i][j][k] = true;
            }
            else{
                cout << "Wrong input! Try again:\n";
                j--;
            }
        }

    cout << "New landscape:\n";
    print(matrix);

    cout << "Input the most interested cut:\n";
    for(;;) {
        cin >> cut;
        if (cut > -1 and cut < 10) {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << matrix[i][j][cut] << " ";
                }
                cout << endl;
            }
            break;
        } else
            cout << "Wrong input! Try again:\n";
    }
}
