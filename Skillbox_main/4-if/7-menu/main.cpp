#include <iostream>

int main() {
  using namespace std;

  cout << "\n\nМеню\n";
int wDay;
cout << "Введите день недели (1-7), чтобы узнать актуальное меню: ";
cin >> wDay;
if (wDay==1) cout << "Меню понедельника";
else
  if (wDay==2) cout << "Меню вторника";
  else
    if (wDay==3) cout << "Меню среды";
    else
      if (wDay==4) cout << "Меню четверга";
      else
        if (wDay==5) cout << "Меню пятницы";
        else
          if (wDay==6) cout << "Меню субботы";
          else
            if (wDay==7) cout << "Меню воскресенья";
            else cout << "Вы ввели неверное число!";
}