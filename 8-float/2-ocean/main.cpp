#include <iostream>
#include <cmath>

int main() {
  using namespace std;

int n, k;
float t, ft;

cout << "Количество ручек: ";
cin >> n;
cout << "Количество положений одной ручки: ";
cin >> k;
cout << "Время на проверку одной комбинации: ";
cin >> t;

if (n>0 and k>0 and t>0){
  ft = pow(n,k)*t;
  cout << "Всего времени на проверку всех комбинаций уйдёт " << ft << " секунд";
  }
else cout << "Неправильно, попробуй ещё раз!";

}