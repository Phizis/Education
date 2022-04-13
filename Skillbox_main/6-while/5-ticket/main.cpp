#include <iostream>

int main() {
  using namespace std;

int number;
int t1=0, t2=0, n=0;

cout << "Введите номер билетика: ";
cin >> number;

while (number > 0){
  if (n==3){
    t2+=number%10;
    number/=10;
  }
  else{
    t1+=number%10;
    number/=10;
    n++;
  }

}

if (t1==t2)
      cout << "Это счастливый билетик!";
      else cout << "Это обычный билетик!";
}