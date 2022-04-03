#include <iostream>

int main() {
  using namespace std;

int alc;
int fak; //first aid kit

cout << "Сколько у медика спирта?\n";
cin >> alc;
cout << "Сколько у медика аптечек?\n";
cin >> fak;

if (alc >= 2000 or fak >=5)
  cout << "Можно работать.\n";
else
  cout << "Надо обновить запасы!" ;
} //можно разбить на два условия, чтобы указать чего именно не хватает