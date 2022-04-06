#include <iostream>
#include <cmath>

int main() {
  using namespace std;

int a, b , min, max;

cout << "Введите первое число: ";
cin >> a;
cout << "Введите второе: ";
cin >> b;

min = (a+b-abs(a-b))/2;
max = (a+b+abs(a-b))/2;
cout << min << " меньше " << max;

}