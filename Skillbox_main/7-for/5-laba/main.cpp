#include <iostream>

int main() {
  using namespace std;

int n,x;

cout << "Кол-во бактерий: ";
cin >> n;
cout << "Кол-во антибиотика: ";
cin >> x;

if (n<0)
 cout << "Вы не ввели вирус!";
else 
  if (x<0)
    cout << "Вы не ввели антибиотик!";
  else{
    int kill, h=1;
    for (kill=x*10; kill>0 ;){
      n*=2;
      n-=kill;
      if (n<=0){
        cout << "Вирус погиб!\n";
        break;
      }
      cout << "В " << h << " час осталось " << n << " бактерий\n";
      h++;
      kill-=x;
    }
    if (kill <=0) cout << "Антибиотик перестал действовать!";
  }
}