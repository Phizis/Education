#include <iostream>

int main() {
  using namespace std;

int dd, mm, yy;
int ddr, mmr, yyr;

cout << "Введите сегодняшнюю дату ДД:ММ:ГГГГ: ";
cin >> dd >> mm >> yy;

cout << "Введите дату рождения ДД:ММ:ГГГГ: ";
cin >> ddr >> mmr >> yyr;

if ((yy - yyr) > 18)
cout << "Можно";
else 
  if ((yy - yyr) < 18)
  cout << "Нельзя";
  else 
    if ((mmr > mm) or ( (mmr == mm) and (ddr > dd)))
    cout << "Можно";
    else cout << "Нельзя";
}