#include <iostream>

int main() {
  using namespace std;

int x, y=63/2;
int min=0, max=63;
string answer = "нет";
bool ending=false;

cout << "Введите число от 0 до 63: ";
cin >> x;
cout << "Отвечайте 'больше', 'меньше', 'да' - если число отгадано.\n";

if (x >= 0 and x <= 63){
  while (!ending){
    cout << "Ваше число больше " << y << " ? ";
    cin >> answer;
    if (answer == "больше"){
      if (y == 62) y++;
      min = y;
      y= min + (max-min)/2 ;
    }
    if (answer == "меньше"){
      max = y;
      y= min + (max-min)/2 ;
    }    
    if (answer == "да")
      ending=true;
  }
  cout << "\nВаше число " << y;
}
else cout << "\nЧисло вне заданного диапазона!";
}