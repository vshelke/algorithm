#include <iostream>
#define INC ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

bool isvowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {INC;
    int t, a = 0, m = 0;
    char curr, prev;
    cin >> t;
    cin.get(curr);//garbage \n
    while (t--) {
        cin.get(curr);
        prev = curr;
        while (cin.get(curr) && curr != '\n') {
            if (isvowel(curr) && isvowel(prev)) a++;
            else {
                m = (a > m) ? a: m;
                a = 0;
            }
            prev = curr;
        }
        cout << ((a > m) ? a+1 : m+1)<< '\n';
        a = 0;m = 0;
    }
    return 0;
}
