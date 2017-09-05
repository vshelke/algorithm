#include <iostream>
#include <string>
#include <queue>
using namespace std;

string process(string s) {
    queue<char> x;
    bool flag = 0;
    int len = s.length();
    int mid = len/2;
    for (int i = 0;i<mid;i++)
        x.push(s[i]);
    if (len%2 == 0) {
        for (int j = mid;j<len;j++)
        if (x.front() == s[j]) x.pop();
        else return "NO";
    }else {
    for (int j = mid;j<len;j++) {
        if (x.front() == s[j]) x.pop();
        else if (x.front() != s[j] && !flag) flag = 1;
        else if (x.front() != s[j] &&  flag) return "NO";
    }
    for (int j = mid;j<len;j++) {
        if (x.front() == s[j]) x.pop();
        else if (x.front() != s[j] && !flag) flag = 1;
        else if (x.front() != s[j] &&  flag) return "NO";
    }
    x.push()

    }
    return "YES";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << process(s) << '\n';
    }
    return 0;
}
