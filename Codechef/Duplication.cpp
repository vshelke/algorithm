#include <iostream>
#include <string>
using namespace std;


string generate() {
    string s = "0";
    string t = "1";
    int i;
    while (strlen(s) < 1001) {
        s = s + t;
        for (i = 0; i < strlen(s) ; i++ ) {
            t[i] = to_string(1 - (int)s[i]);
        }
    }
    return s;
}

int main() {
    cout << generate() ;
    return 0;
}
