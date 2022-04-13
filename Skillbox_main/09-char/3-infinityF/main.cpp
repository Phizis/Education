#include <iostream>
 
int main() {
  using namespace std;

string number;
int dot=0, min=0;
bool numbs=false;

cout << "Введите число: ";
cin >> number;

for (int i=0; i<number.length(); i++){

  //проверка, что значения входят в допустимый диапазон
  if (number[i]!='-' and number[i]!='.' and (number[i]<'0' or number[i]>'9')){
  cout << "Неправильная запись числа!\n";
  numbs=false;
  break;
  }

  //проверка что вообще есть цифры
  if (number[i]>='0' and number[i]<='9'){
    numbs=true;
  }

  //количественная проверка на точки и минусы
  if (number [i]=='.'){
    dot++;
    if (dot>1){
      cout << "Недопускается больше 1 точки в записи числа\n";
      numbs = false;
      break;
    }
  }

  if (number [i]=='-'){ //на всякий случай
    min++;
    if (min>1){
      cout << "Недопускается больше 1 минус в записи числа\n";
      numbs = false;
      break;
    }
  }
}

if (numbs)
  cout << "Yes";
  else cout << "No"; 
}