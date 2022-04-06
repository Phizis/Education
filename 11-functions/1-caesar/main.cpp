#include <iostream>

using namespace std;

string encrypt( string message, int shift ){
    string new_message;
    for (int i=0; i<message.length(); i++) {
      int c = message[i];
        if (message[i] >= 'a' and message[i] <= 'z')
          {
            c += shift;
            if (c > 'z')
                c -= 26;
            if (c <'a')
                c+=26;
            new_message+=c;
        }
        else 
          if (message[i] >= 'A' and message[i] <= 'Z')
          {
              c += shift;
              if (c > 'Z')
                  c -= 26;
              if (c <'A')
                  c+=26;
              new_message+=c;
          }
          else new_message+=c;
    }
    return new_message;
}

string decrypt ( string message, int shift){
    shift=-shift;
    return encrypt(message, shift);

}

int main() {
    string message;
    int shift;

   cout << "Message: ";
    getline (cin, message);
      
    cout << "Change value: " ;
    cin >> shift;

    cout << "Encrypt result:\n" << encrypt(message, shift) << endl;
    cout << "Decrypt result:\n" << decrypt(encrypt(message, shift), shift) << endl;
}
