#include <iostream>

int main() {
  using namespace std;

  cout << "\n\nЧётное\n";
  int n;
  cout << "Введите число: ";
  cin >> n;
  if (n%2==0) cout << "\nЧисло четное!";
    else cout << "\nЧисло нечетное!";
}