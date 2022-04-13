#include <iostream>
#include <cmath>

int main() {
  using namespace std;

float size, total=0;
int c, speed;

cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
cin >> size;

if (size <=0)
  cout << "Поднялся с дивана и побежал на тренировку!\n" ;

for (c=0; c<size ;){
c++;
cout << "Какой у тебя был темп на километре " << c << "? ";
cin >> speed;
if (speed < 0){
  cout << "Бежать в другую сторону не по правилам!\n";
  c--;
}
else total+=speed;
}

cout << "\nТвой средний темп за тренировку: " << trunc((total/c)/60) << " минуты " << ceil((((total/c)/60) - trunc((total/c)/60))*60) << " секунд.";

}