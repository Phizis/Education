#include <iostream>

int main() {
  using namespace std;
  int x,y;
  cout << "\n\nВ уме\n";
  int z;
  cout << "Введите первое число: ";
  cin >> x;
  cout << "Введите второе число: ";
  cin >> y;
  cout << "Сколько получится если сложить " << x << " и " << y <<" ?\n";
  cin >> z;
  if (z==(x+y))  cout << "Верно! Ты молодец!";
  else cout << "Неправильно! Попробуй ещё раз!\nВерный ответ: " << x+y;
}