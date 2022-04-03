#include <iostream>

int main() {
  using namespace std;

int number;
int n=1, t=0;

cout << "Введите число: ";
cin >> number;

if  ((number < 0) and (number > 1073741824))
  cout << "Неправильный ввод!";
else {  
  if (number > 1)
    while (number > n){
      n*=2;
      t++;
    }
  if (number == n)
    cout << "Число " << number << " является " << t << " степенью двойки.";
  else cout << "Число " << number << " не является степенью двойки.";
}

}