#include <iostream>
#include <cmath>

int main() {
  using namespace std;

float f,t,m,a,s;

cout << "Введите силу тяги F(Н): ";
cin >> f;
cout << "Введите массу корабля m(кг): ";
cin >> m;
cout << "Введите время работы двигателей t(сек): ";
cin >> t;

a=f/m;
s=(a*pow(t,2))/2;
cout << "Проделанный путь " << s << " км";
}