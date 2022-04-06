#include <iostream>
#include <cmath>

int main() {
  using namespace std;
float W, D, N, Nnew, Nold;
int time=0;

cout << "Введите воду: ";
cin >> W;
cout << "Введите антибиотик: ";
cin >> D;
cout << "Введите бактерии: ";
cin >> N;
Nold=N;

while ( time < 20){
    Nnew = 2*Nold - Nold*(D/W);
    Nold=Nnew;
    D=D - D*0.2;
    time++;
    if (Nnew > 0)
        cout << "За " << time << " минуту эксперимента концентрация антибиотика снизилась до " << D << "мл , а живых бактерий " << Nnew << "\n";
    else {
        cout <<"Все бактерии умерли, эксперимент завершен!";
        break;
    }
}

}