#include <iostream>

int main() {
  using namespace std;

cout << "\n\nКалькулятор опыта\n";
  int lvl=1;
  int exp;
  cout << "Введите количество полученного опыта (max=8500): ";
  cin >> exp;
  if (exp>=1000) {
    lvl++;
    exp-=1000;
    if (exp>=2500) {
      lvl++;
      exp-=2500;
      if (exp>=5000){
        lvl++;
        cout << "Вы достигли максимального уровня!";
        cout << "Ваш уровень: " << lvl;
      }
      else cout << "Ваш уровень: " << lvl;
    }
    else cout << "Ваш уровень: " << lvl;
  }
  else cout << "Ваш уровень: " << lvl;

}