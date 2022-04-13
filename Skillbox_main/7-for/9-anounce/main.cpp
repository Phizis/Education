#include <iostream>

int main() {
  using namespace std;


int x,y,t;

cout << "Введите длинну колонтитула: ";
cin >> x;
cout << "Введите количество !-знаков: ";
cin >> y;

for (t=0; t<=x; t++){
  
  if ( t == x/2-y/2){
    x-=y;
    for (; y>0; y--)
    cout << "!";
  }
  else cout << "~";  
}

}