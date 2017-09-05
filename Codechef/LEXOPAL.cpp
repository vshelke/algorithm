#include <iostream>
#include <string>
using namespace std;

string process(string s) {
    int len = s.length();
    int mid = ((len%2 == 0) ? len/2 : (len/2)+1) ;
    for (int i =0,j=len-1; i<mid; i++, j--) {
        if (s[i] != s[j] && s[i] == '.')
            s[i] = s[j];
        else if (s[i] != s[j] && s[j] == '.')
            s[j] = s[i];
        else if (s[i] == '.' && s[j] == '.')
            s[i] = s[j] = 'a';
        else if (s[i] != s[j])
            return "-1";
    }
    return s;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << process(s) <<'\n';
    }
    return 0;
}
