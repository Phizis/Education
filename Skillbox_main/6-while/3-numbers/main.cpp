#include <iostream>

int main() {
  using namespace std;

int number;
int symbol=0;

cout << "Введите число: ";
cin >> number;

cout << "В числе " << number;
if (number == 0)
cout << " всего 1 знак.";
else
  while (number > 0){
    number = number/10;
    symbol++;
}
cout << " всего " << symbol << " знаков.";
}