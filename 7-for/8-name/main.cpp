#include <iostream>

int main() {
  using namespace std;

for (int x = 0; x <= 20; x++) {
    for (int y = 0; y <= 50; y++) {
      if (x == 10 && y == 25)
        cout << "+";
      if (x==0 and y==25)
        cout << "^";
      if (x==10 and y==50)
        cout << ">";
      if (x == 10 and y!=50)
        cout << "-";
      else if (y == 25 and x!=0 and x!=20)
         cout << "|";
      else
         cout << " ";
    }
     cout << "\n";
  }
}