#include <iostream>
 
int main() {
  using namespace std;

string one, two;
int bulls=0, cows=0;

cout << "Введите задуманное число: ";
cin >> one;
cout << "Введите второе число: ";
cin >> two;

for ( int i=0; i<one.length(); i++ )
  for ( int j=0; j<two.length() ; j++ ){
    if (one[i]==two[j]){
      if (i==j) {
        bulls++;
        i++;
      }
      else cows++;
    }
  }
cout << "Быков: " << bulls << ", коров " << cows;
}