#include <iostream>

int main() {
  using namespace std;

int rub;

cout << "Введите число, склонение которого хотите узнать: \n";
cin >> rub;

if ((rub%100 > 10) and (rub%100 < 20))
  cout << rub << " рублей"; 
else {
  if (rub % 10 == 1)
    cout << rub << " рубль";
  else
    if ((rub % 10) >= 2 and (rub % 10) <= 4)
      cout << rub << " рубля";
    else cout << rub << " рублей";
    }
}   