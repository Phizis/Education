#include <iostream>
using namespace std;

void reverse (int *mass){
    int temp;
    for(int i=0; i<5; i++){
        temp=*(mass+i);
        *(mass+i)= *(mass+9-i);
        *(mass+9-i)= temp;
    }
}

int main() {
    int *mass=new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(mass);

    for (int i=0; i<10; i++)
        cout << *(mass+i) << " ";
    delete[] mass;
}