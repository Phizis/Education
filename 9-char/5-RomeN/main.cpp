#include <iostream>
 
int main() {
  using namespace std;

string rome;
int arab;

cout << "Ввод: ";
cin >> arab;;

if (arab>=1 and arab<=3999){

  for(int i = 0; i < (arab/1000); i++)//тысячи
    rome += 'M';
  arab=arab%1000;

  if (arab%1000>0) {//сотни
    if (arab/100 > 0 and arab/100 < 4 ){
      for (int j=0; j< arab/100 ; j++)
        rome+= 'C';
    }
    if (arab/100 == 4)
      rome+= "CD";
    if (arab/100 == 5)
      rome+= 'D';
    if (arab/100 == 6)
      rome+= "DC";
    if (arab/100 == 7)
      rome+= "DCC";
    if (arab/100 == 8)
      rome+= "DCCC" ;    
    if (arab/100 == 9)
      rome+="CM";
    arab=arab%100;
    }

  if (arab%100>0) {//десятки
    if (arab/10 > 0 and arab/10 < 4 ){
      for (int j=0; j< arab/10 ; j++)
        rome+= 'X';
    }
    if (arab/10 == 4)
      rome+= "XL";
    if (arab/10 == 5)
      rome+= 'L';
    if (arab/10 == 6)
      rome+= "LX";
    if (arab/10 == 7)
      rome+= "LXX";
    if (arab/10 == 8)
      rome+= "LXXX" ;    
    if (arab/10 == 9)
      rome+="XC";
    arab=arab%10;
    }

    if (arab%10>0) {//единицы
    if (arab > 0 and arab < 4 ){
      for (int j=0; j< arab ; j++)
        rome+= 'I';
    }
    if (arab == 4)
      rome+= "IV";
    if (arab == 5)
      rome+= 'V';
    if (arab == 6)
      rome+= "VI";
    if (arab == 7)
      rome+= "VII";
    if (arab == 8)
      rome+= "VIII" ;    
    if (arab == 9)
      rome+="IX";
    }
  cout << "Вывод: " <<rome;
}
else cout << "Неправильный ввод!";
}