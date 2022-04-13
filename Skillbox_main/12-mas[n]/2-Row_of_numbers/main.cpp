#include <iostream>
using namespace std;

int main() {
  int numbers[] = {114,111, 106, 107, 108, 105, 115,  108, 110, 109, 112, 113, 116, 117, 118};

  for (int i=0; i<sizeof(numbers); i++){
    for (int j=i+1; j<sizeof(numbers); j++){
      if (numbers[j]==numbers[i]){
        cout << numbers[j];
        return 0;
      }
    }
  }
}