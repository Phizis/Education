#include <iostream>

int main() {
  using namespace std;
int x;

cout << "Введите длинну ёлки: ";
cin >> x;
if (x>0){    
  int t=x*2-1;
  
  for (int i=1; i<=x; i++){ // кол-во строк (высота)
    for (int j=0; j<=t; j++) // кол-во столбцов (ширина)
      if ( j == t/2-(i-1) ){    //откуда начинать
        for (int k=0; k<i*2-1 ; k++){ //сколько выводить
        cout << "#";
        j++;
        }
      }
        else cout << " ";
  cout << "\n";
  }  
}
else cout << "Ошибка ввода!";
}