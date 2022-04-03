#include <iostream>

int main() {
  using namespace std;

int x,y;

cout << "Введите ширину рамки: ";
cin >> x;
cout << "Введите высоту рамки: ";
cin >> y;

for (int n=1; n<=y; n++){
  for (int t=1; t<=x; t++){
    if (t==1) cout << "|";
    else
      if (t==x)
        cout << "|\n";
      else
        if (n==1 or n==y)
          cout << "-";
        else cout << " ";
  }
}

}