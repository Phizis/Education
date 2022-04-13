#include <iostream>
using namespace std;

int main() {
  //float numbers[15]={1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};
  float numbers[15];
  float temp;

  cout << "Enter numbers:\n";
  for (int i=0; i<15; i++)
    cin >> numbers[i];

  for (int i=0; i<14; i++){
    for (int j=i+1; j<15; j++){
      if (numbers[j]<numbers[i]){
        temp = numbers[i];
        numbers [i]=numbers[j];
        numbers[j] = temp;
      }
    }
  }
  
  for (int i=0; i<15; i++)
  cout << numbers[i] << " ";
}