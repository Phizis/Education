#include <iostream>

int main() {
  using namespace std;
  
  int hour;
  cout << "Который сейчас час (1-12)? ";
  cin >> hour;

  if ((hour < 13) and (hour > 0)){
    int n=0;
    while (n < hour){
      cout << "Ку-ку\n";
      n++;
    }
  }
  else cout << "\nНеверный ввод.";
}