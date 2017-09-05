#include <iostream>
#include <map>
#include <string>
using namespace std;

string process(map<char, int> m, string b) {
    for (int i = 0;i<b.length();i++)
        if (m[b[i]]) return "Yes";
    return "No";
}
int main() {
    int t;
    cin >> t;
    char ch;
    cin.get(ch);//garbage
    while (t--) {
        map<char, int> m;
        while (cin.get(ch) && ch != '\n')
            m[ch] += 1;
        string b;
        cin >> b;
        cout << process(m, b) << '\n';
        cin.get(ch);//garbage
    }
    return 0;
}
