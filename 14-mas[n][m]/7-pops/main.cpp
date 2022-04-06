#include <iostream>
using namespace std;

void input(bool matrix[12][12]) {
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            matrix[i][j]=true;
}

void print(bool matrix[][12]){
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (matrix[i][j])
                cout << 'o' << " ";
            else cout << 'x' << " ";
        }
        cout << endl;
    }
}

int pop_init(bool matrix[][12], int x, int y, int m, int n){
    int count=0;
    for (int i = x; i <= m; i++)
        for (int j = y; j <= n; j++) {
            if (matrix[i][j]) {
                matrix[i][j] = false;
                cout << "Pop!\n";
                count++;
            }
            else  cout << "Already poped ;(\n";
        }
    return count;
}

int pop(bool matrix[][12], int x, int y, int m, int n){
    int count;
    if(x<m and y<n){
        count=pop_init(matrix, x, y, m, n);
        return count;
    }
    else{
        if(x>=m and y>=n) {
            count = pop_init(matrix, m, n, x, y);
            return count;
        }
        else{
            if(x>=m and y<n)
            {
                count = pop_init(matrix, m, y, x, n);
                return count;
            }
            else{
                if(x<m and y>=n){
                    count = pop_init(matrix, x, n, m, y);
                    return count;
                }
            }
        }
    }
}

int main() {

    bool matrix1[12][12];
    int x, y, m, n;
    input (matrix1);

    for (int i=0; i<144; ) {
        print(matrix1);

        cout << "Input start coords:";
        cin >> x >> y;
        if(x<0 or x>11 or y<0 or y>11)
            cout << "Error;\n";
        else {
            cout << "Input end coords:";
            cin >> m >> n;
            if(x<0 or x>11 or y<0 or y>11)
                cout << "Error;\n";
            else{
                i+=pop(matrix1,x,y,m,n);
            }
        }
    }
    cout << "\nPops ended.\n";
    print(matrix1);
}