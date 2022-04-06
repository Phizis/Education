#include <iostream>
#include <cmath>

int main() {
  using namespace std;

int hp=0, dmg , pwr;
float res=-1;

while (hp<=0){
  cout << "Сколько здоровья у орка? ";
  cin >> hp;
  if (hp <=0) cout << "Это орк уже мертв. Найдите живого!\n";
}

while (res<0){
  cout << "Посмотрите в бестиарий и скажите, какое у него сопротивление магии(0-1): ";
  cin >> res;
  if (res<0 or res>1) cout << "Этого не может быть!\n";
}

while (hp>0){
  cout << "С какой силой вы атакуете орка? ";
  cin >> pwr;
  if (pwr >=0){
    dmg = pwr - pwr*res;
    hp-=dmg;
    if (hp <=0)
    hp=0;
    cout << "Вы нанесли " << dmg << " урона." << "\nУ орка осталось " << hp << " здоровья.\n"; 
  }
  else cout << "Ты не туда воюешь!\n" ;
}
cout << "Вы победили!";

}