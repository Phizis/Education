#include <iostream>

int main() {
  using namespace std;

  cout << "\n\nДва числа\n";
  int x, y;
  cout << "Введите первое число: ";
  cin >> x;
  cout << "Введите второе число: ";
  cin >> y;
  if (x>y)  cout << y << " меньше";
  else {
    if (x==y) cout << "Числа равны";
    else cout << x << " меньше";
  }