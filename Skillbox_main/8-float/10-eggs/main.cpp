#include <iostream>
#include <cmath>

int main() {
  using namespace std;

float x, depth, D=0, from=0, to=4;

do{
    cout << "Введите максимально допустимый уровень опасности: ";
    cin >> D;
    if (D <= 0) cout << "Некорректный ввод!\n";
}
while (D <= 0);

do{
  x = (from + to) / 2.0f; //2
  depth = (pow(x,3) - 3*pow(x,2) - 12*x +10); //узнать результат с данным х
  if (depth > 0){
      from = x; //сдвинуть нижнюю границу
    } else
      to = x;  //сдвинуть верхнюю
}
while (fabs(depth) > D);

cout << "Приблизительная глубина безопасной кладки: " << x << " метра.\n";
}