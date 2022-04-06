#include <iostream>
#include <cmath>

int main() {
  using namespace std;

float startRange, endRange;
int tick=0;

cout << "Введите начальную амплитуду маятника: ";
cin >> startRange;
cout << "Введите конечную амплитуду маятника: ";
cin >> endRange;

if (startRange > 0 and endRange > 0 and endRange < startRange){
  while (endRange < startRange){
    startRange=startRange - startRange*0.084;
    tick++;
  }
  cout << "Количество колебаний до остановки - " << tick;
}
else cout << "Введенные данные не соответствуют условию эксперимента!";

}