#include <iostream>

int main() {
  using namespace std;
  
  int sum;
  int credit, creditSum = 0;
  string name;

  cout << "Добрый день, как к вам можно обращаться? (имя)\n";
  cin >> name;

  cout << "(для коллектора) Введите сумму долга: ";
  cin >> sum;

  cout << name << ", ваша задолженность составляет " << sum << " рублей. Сколько рублей вы готовы внести прямо сейчас, чтобы ее погасить?\n";
  
  while ( sum > creditSum ){
    cin >> credit;
    creditSum = creditSum + credit;
    if (sum > creditSum) 
    cout << "Ваш долг равен " << (sum - creditSum) << " рублей. Внесите ещё!\n";
    else 
      if (sum == creditSum) 
      cout << "Ваш долг погашен! Спасибо, что пользовались нашими услугами, до скорой встречи!";
      else {
        cout << "Внесенная сумма превышает ваш долг на " << (creditSum - sum) << " рублей! Мы заботимся о вас и ваших деньгах, внесите верное кол-во денег\n"; //задача на склонение рублей :D
        creditSum = creditSum - credit;
        // или просто cout << "Спасибо за чаевые!";
      }
    }
} //я надеюсь тут не подразумевается, что при виде коллектора, ты решишь попросить  ещё в долг, т.е. if ( creditSum < 0 )