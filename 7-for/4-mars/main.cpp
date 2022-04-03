#include <iostream>

int main() {
  using namespace std;

int wight =15;
int length = 20;
string ch;

int x=7, y=10;

for (;;){
  do{
    cout << "Ваши координаты " << x << ":" << y <<"\n";
    cout << "Введите следующию команду(wasd): ";
    cin >> ch;
    if ( ch == "w" ){
      y++;
    }
    if ( ch == "s" ){
      y--;
    }
    if ( ch == "a" ){
      x--;
    }
    if ( ch == "d" ){
      x++;
    }
  }
    
  while ( (x>=0 and x<=wight) and (y>=0 and y<=length) );
  if (x<0){
    cout << "Вы уперлись в стену!\n";
    x++;
  }
  if (x>wight){
    cout << "Вы уперлись в стену!\n";
    x--;
  }
  if (y<0){
    cout << "Вы уперлись в стену!\n";
    y++;
  }
  if (y>length){
    cout << "Вы уперлись в стену!\n";
    y--;
  }
}
}