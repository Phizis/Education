#include <iostream>
#include <cmath>

int main() {
  using namespace std;

float size, speed, cSize, progress;
int time=0;

cout << "Укажите размер файла для скачивания: ";
cin >> size;
cout << "Какова скорость вашего соединения? ";
cin >> speed;

if (size > 0 and speed > 0){
while (cSize < size){
  cSize+=speed;
  if (cSize > size) cSize = size;
  progress = ceil((cSize/size)*100);
  time++;
  cout << "Прошло " << time << " сек. Скачано " << cSize << " из " << size << " МБ (" << progress <<"%).\n";
}
}
else cout << "Неверно введён размер или скорость!";
}