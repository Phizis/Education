#include <iostream>

int main() {
  using namespace std;
int a1, b1, a2, b2, a3, b3;

cout << "Введите координаты первой точки через пробел: ";
cin >> a1 >> b1;
cout << "Введите координаты второй точки через пробел: ";
cin >> a2 >> b2;
cout << "Введите координаты третей точки через пробел: ";
cin >> a3 >> b3;

if (((a1 * b2) != (a2 * b1)) and ((a2 * b3) != (a3 * b2))) //проверка угла
  {
    if (((a1 == a2) and (b1 == b2)) or ((a1 == a3) and (b1 == b3)) or ((a2 == a3) and (b2 == b3)))      //проверка на совпадение точек
    cout << "Нельзя";
    else  cout << "Можно";  
}
else cout << "Нельзя";
}