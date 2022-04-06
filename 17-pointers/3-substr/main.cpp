#include <iostream>
#include <cstring>
using namespace std;

bool substr(char* a, char* b){
    if (strstr(a,b))
        return  true;
    else
        return false;
}

int main() {
    char* a = "Hello world";
    char* b = "wor";
    char* c = "banana";

    cout << substr(a,b) << " " << substr(a,c);
}
