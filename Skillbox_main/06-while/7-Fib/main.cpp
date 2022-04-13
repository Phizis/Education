#include <iostream>

int main() {
  using namespace std;

int number;
int n1=0, n2=1, n3, t=0;

cout << "Значение какого числа Ф вы хотите узнать?: ";
cin >> number;

if (number < 47){
    while ( t < number ){
      n3 = n1 + n2;
      n1=n2;
      n2=n3;
      cout << n1 << "\n";
      t++;
    }
    cout << "Значение " << number << " числа Ф равно " << n1;
}
else cout << "К сожалению, узнать значение данного числа невозможно!";
}