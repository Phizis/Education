#include <iostream>

int main() {
  using namespace std;

int water, milk;
int am=0, la=0;
string coffee;

cout << "Залейте воды(мл): ";
cin >> water; 
cout << "Залейте молока(мл): ";
cin >> milk; 

if (water > 0 and milk >=0){
  for (;;){
    if (water >= 300 or (water >=30 and milk >= 270)){
    cout << "\nЗдравствуйте!\n";
    cout << "Сейчас в кофемашине " << water << "мл воды и " << milk <<"мл молока.\n";
    cout << "Для американо требуется 300 мл воды, а для латте 30 мл воды и 270 мл молока.  \n";
    
    int end=0;
      while ( end==0){
        cout << "американо или латте? ";
        cin >> coffee;
        
        if (coffee == "американо"){
          if (water >= 300){
            cout << "Ваш напиток готов.\n";
            water-=300;
            am++;
            end++;
          }
            else {
              cout << "Не хватает воды\n";
              end++;
            }
        }
        else {
          if (coffee == "латте"){
            if (water >= 30 and milk >=270){
              cout << "Ваш напиток готов.\n";
              la++;
              water-=30;
              milk-=270;
              end++;
            }
            else{
              cout << "Не хватает молока\n";
              end++;
              }
            }
          
          else
            cout << "Неправильный ввод!\n";
        }
      }
    }
    else{ 
      cout << "Ингридиенты закончились\n";
      break;
    }
  }
  cout << "За смену выдано " << am << " американо и " << la <<" латте.\n";
  cout << "В кофемашине осталось " << water << "мл воды и " << milk <<"мл молока.\n";
}
else cout << "Неправильный ввод!";
}