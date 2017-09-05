#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, t, ans = 0 ;
    cin >> t;
    while (t--) {
        string s;
        ans = 0;
        bool arr[10];
        for (i = 0;i<10;i++)
            arr[i] = 0;
        cin >> s;
        for (i = 0;s[i];i++)
            if (arr[s[i]-48] == 0) {
                arr[s[i]-48] = 1;
                ans += s[i]-48;
            }
        cout << ans << '\n';
    }
    return 0;
}
