#include <iostream>
using namespace std;

int main() {
  string surname[10];
  int number[3];

  cout << "Enter surnames:\n";
  for (int i=0; i < 10; i++)
    cin >> surname[i];

  cout << "Enter numbers:\n";
  for (int i=0; i<3; i++){
    cin >> number[i];
    if (number[i]<1 or number[i]>10){
      cout << "Error! Try again.\n";
      i--;
    }
  }
  for (int i=0; i<3; i++)
    cout << number [i] << " " << surname[number[i]-1] << endl;
}