#include <iostream>

int main() {
  using namespace std;

int a, b, c;
    cout << "Введите размеры кирпича:\n";
    cin >> a >> b >> c;

int x, y, z;
    cout << "Введите размеры отверстия:\n";
    cin >> x >> y >> z;

int t;

    if ( b > a ){ t=a; a=b; b=t;}
    if ( c > b ){ t=b; b=c; c=t;}
    if ( b > a ){ t=a; a=b; b=t;}

    if ( y > x ){ t=x; x=y; y=t;}
    if ( z > y ){ t=y; y=z; z=t;}
    if ( y > x ){ t=x; x=y; y=t;}

if ((a < x) and (b < y) and (c < z))
  cout << "Можно";
  else cout << "Нельзя";
}