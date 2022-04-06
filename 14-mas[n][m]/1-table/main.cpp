#include <iostream>

using namespace std;

void package (int matrix[2][12], int count, bool vip){
    for (int i=0; i<2; i++){
        for(int j=0; j<12; j++){
            matrix[i][j]=count;
            if (vip){
                if(j==0 or j==11)
                matrix[i][j]=count+1;
            }
        }
    }
}

void printM (int matrix[2][12]){
    for (int i=0; i<2; i++){
        for(int j=0; j<12; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
}

int main() {
    int chairs[2][12], spoons[2][12], plates[2][12];
    int chair=1, spoon=3, plate=2;

    package(chairs, chair, false);
    cout << "Chairs\n";
    printM(chairs);

    package(spoons, spoon, true);
    cout << "Spoons\n";
    printM(spoons);

    package(plates, plate, true);
    cout << "Plates\n";
    printM(plates);

    //shit happens
    chairs[0][4]++;
    cout << "\nChild detected!\n";
    printM(chairs);
    cout << endl;

    cout << "Spoon stolen!\n";
    spoons[1][2]--;
    printM(spoons);
    cout << endl;
    spoons[0][0]--;
    printM(spoons);
    cout << endl;
    spoons[1][2]++;
    printM(spoons);
    cout << endl;

    cout << "No spoon no desert!\n";
    plates[0][0]--;
    printM(plates);
    cout << endl;
}