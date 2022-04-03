#include <iostream>

int main() {
  using namespace std;

int water, milk;
string coffee;

for (;;){
  int ending=0;

  cout << "Сколько залито воды?(мл) ";
  cin >> water;
  cout << "Сколько залито молока?(мл) ";
  cin >> milk;

  while (ending==0){
    cout << "американо или латте? ";
    cin >> coffee;

    if (coffee == "американо"){
      if (water >= 300){
        cout << "Ваш напиток готов.\n";
        ending++;
      }
        else {
          cout << "Не хватает воды\n";
          ending++;
        }
    }
    else {
      if (coffee == "латте"){
        if (water >= 30){
          if (milk >=270){
            cout << "Ваш напиток готов.\n";
            ending++;
          }
          else{
            cout << "Не хватает молока\n";
            ending++;
          }
        }
        else {
          cout << "Не хватает воды\n";
          ending++;
        }

      }
      else
        cout << "Неправильный ввод!\n";
    }
  }
}

}