#include <iostream>

int main() {
  using namespace std;

int speed;
int high;

cout << "С какой скоростью летит самолёт?\n";
cin >> speed;
cout << "Какая высота полёта?\n";
cin >> high;

if (speed >=750 and speed <= 850 and high >=9000 and high <= 9500)
  cout << "Продолжайте полёт в штатном режиме.";
else cout << "Скорректируйте курс!";
}

//Как и с медиком, можно разделить, чтобы указать, какой параметр не верен.