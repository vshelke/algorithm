#include <iostream>
#include <string>
using namespace std;

string process(string a) {
    string out = "";int len = a.length();
    for (int i = 0;i<len-1;i++)
        if (a[i] != a[i+1])
            out += a[i];
    return out+a[len-1];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s>> t;
        cout << ((process(s) == process(t)) ? "Yes" : "No") << '\n';
    }
    return 0;
}
