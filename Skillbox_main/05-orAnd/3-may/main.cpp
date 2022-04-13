#include <iostream>

int main() {
  using namespace std;

int date;

cout << "Какая сегодня дата?\n";
cin >> date;

if (date > 0 and date <31) {

  if ((date >= 1 and date <= 5) or (date >= 8 and date <=10))
    cout << "Поздравляем с праздничными выходными!";
  else
    if ((date % 7 == 0) or ((date+1) % 7 ==0))
      cout << "Поздравляем с обычными выходными!" ;
    else
      cout << "Хватит отдыхать, пора на работу"; 
}
else 
  cout << "Введена неверная дата!" ;

}