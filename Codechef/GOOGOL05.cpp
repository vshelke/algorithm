#include <iostream>
#include <string>
#include <map>
#define INC ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main() {
    map<string, int> m;
    map<string, int>::iterator it;
    int t;
    INC;
    cin >> t;
    while (t--) {
        string tmp;
        cin >> tmp;
        m[tmp] += 1;
    }
    for (it = m.begin(); it!=m.end();it++) {
        cout << (it->first) << " " << (it->second) << '\n';
    }
    return 0;
}
