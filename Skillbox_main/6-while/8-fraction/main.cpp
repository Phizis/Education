#include <iostream>

int main() {
  using namespace std;

int ch, zn, n=1, t=0;

cout << "Введите числитель: ";
cin >> ch;
cout << "Введите знаменатель: ";
cin >> zn;

while ( n <= ch and n <= zn ){
  if ( ch%n==0 and zn%n==0){
    ch/=n;
    zn/=n;
  }
  n++;
  if ( ((n > ch) or (n > zn)) and (t==0)){
  n=1;
  t++;
  }
  //cout << ch << " " << zn << " " << n << "\n";
  }
  cout << "Дробь сократилась до "<< ch << "/" << zn << "\n";
}