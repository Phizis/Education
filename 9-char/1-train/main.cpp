#include <iostream>
 
int main() {
  using namespace std;

string arrive, depart;
bool check = false;
int hd, md, ha, ma, totalH, totalM;

cout << "Введите время отправления(hh:mm): ";
cin >> depart;
cout << "Введите время прибытия(hh:mm): ";
cin >> arrive;

//depart
if ( depart.length() == 5){
  if (depart[2] == ':'){
    check = true;
    for (int i=0; i<5; i++){
        if (i==2) i++;
        if (depart [i] < '0' or depart[i] > '9')
        check = false;       
    }
  }
}

if (check==true){
  hd = 10*(depart [0]-'0') + (depart [1]-'0');
  md = 10*(depart [3]-'0') + (depart [4]-'0');
}
else cout << "Error!";

//arrive
if ( arrive.length() == 5){
  if (arrive[2] == ':'){
    check = true;
    for (int i=0; i<5; i++){
        if (i==2) i++;
        if (arrive [i] < '0' or arrive[i] > '9')
        check = false;       
    }
  }
}

if (check==true){
  ha = 10*(arrive [0]-'0') + (arrive [1]-'0');
  ma = 10*(arrive [3]-'0') + (arrive [4]-'0');
}
else cout << "Error!";

if (ha <= 23 and ma <= 59){
  //подсчет часов
  if (ha >= hd)
    totalH = ha-hd;
  else 
    totalH = (ha+24)-hd;
  //подсчёт минут
  if (ma >= md)
    totalM = ma-md;
  else {
    totalM = (ma+60)-md;
    totalH--;
  }
}
else cout << "Error!";
cout << "\nПоезд находится в пути " << totalH << " часов " << totalM << " минут";

}