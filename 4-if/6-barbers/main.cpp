#include <iostream>

int main() {
  using namespace std;

  cout << "\n\nЦелочисленные Барберы\n";
int totalMans;
int totalBarb;
int totalDays = 30;
int shiftTime = 8;
int clientsServ;
int cPerBarb;
int reqBarbs;

cout << "Сколько мужчин проживает в городе? ";
cin >> totalMans;
cout << "Сколько трудоустроено барберов? " ;
cin >> totalBarb;

clientsServ = shiftTime*totalDays*totalBarb; //человек в месяц на всех барберов
cPerBarb = shiftTime * totalDays;     //клиентов на 1 барбера в месяц
reqBarbs = totalMans/cPerBarb;        //необходимое количество
//cout << "Барбер работает " << totalDays << " дней, по " << shiftTime << " часов в день. За месяц один барбер может обслужить " << cPerBarb << " мужчин.\n";
if (clientsServ >= totalMans)
cout << "Вам хватает барберов, чтобы остричь " << totalMans << " мужчин";
else {
  if ((totalMans%(reqBarbs*shiftTime*totalDays)!=0) ) {
    reqBarbs++;
    cout << "Вам не хватает " << reqBarbs-totalBarb << " барберов";
  }
  else cout << "Вам не хватает " << reqBarbs-totalBarb << " барберов";
    }
}