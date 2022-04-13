#include <iostream>

int main() {
  using namespace std;

int money;
cout << "Введите сумму денег: " ;
cin >> money;

if ((money < 150000) and (money%100==0)){
if (money >= 5000){
  cout << money/5000 << " купюры по 5000\n" ;
  money = money - 5000*(money/5000);
}
if (money >= 2000){
cout << money/2000 << " купюры по 2000\n" ;
money = money - 2000*(money/2000);
}
if (money >= 1000){
cout << money/1000 << " купюры по 1000\n" ;
money = money - 1000*(money/1000);
}
if (money >= 500) {
cout << money/500 << " купюры по 500\n" ;
money = money - 500*(money/500);
}
if (money >= 200){
cout << money/200 << " купюры по 200\n" ;
money = money - 200*(money/200);
}
if (money >= 100){
cout << money/100 << " купюры по 100\n" ;
money = money - 100*(money/100);
}
}
else cout << "Невозможно выдать такую сумму!";
}