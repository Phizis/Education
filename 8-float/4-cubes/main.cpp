#include <iostream>
#include <cmath>

int main() {
  using namespace std;

float x, y, z;
int xn=0, yn=0, zn=0, count, set;
cout << "Введите размеры бруска\n";
cout << "X: ";
cin >> x;
cout << "Y: ";
cin >> y;
cout << "Z: ";
cin >> z;

if (x>=5 and y>=5 and z>=5){
while (x>=5){
  while (y>=5){    
    while (z>=5){
      z-=5;
      zn++;
    }
    y-=5;
    yn++;
  }
x-=5;
xn++;
}
count = xn*yn*zn;
cout << "Количесвтво кубиков " << count << ".\n";
set = pow( trunc( pow(count,1.0/3) ),3) ;
cout << "Из них можно составить набор из "<< set << " кубиков." ;
}
else cout << "Невозможно сделать кубики из данного бруска." ;
}