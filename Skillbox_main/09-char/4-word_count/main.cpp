#include <iostream>
 
int main() {
  using namespace std;

string text;
int count=0, space=1;

cout << "Введите строку: ";
getline (cin, text);

for (int i=0; i < text.length(); i++ ){
  if (text[i]!=' ' and count!=space){
  count++;
  space = count;
  }
  else{
    if (text[i]==' ')
    space++;
  }
}

cout << "Ответ: " <<count;
}