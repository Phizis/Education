#include <iostream>

int main() {
  using namespace std;
   string s;  
   cin >> s;
   int i=0;

    for (i=0; i<s.length() ; i++){
      cout << i << "\n";
    }
    cout  << "В слове " << s << " " << i << " букв";
  
} 