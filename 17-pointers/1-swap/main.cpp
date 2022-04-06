#include <iostream>
using namespace std;

void swap (int *a, int *b){
    int t;
    t=*b;
    *b=*a;
    *a=t;
}

int main() {
    int a=10, b=20;
    swap(&a,&b);
    cout << a << " " << b;
}
