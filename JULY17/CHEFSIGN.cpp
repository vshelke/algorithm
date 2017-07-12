#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio (false);
	int t;
	long trav = 1, i, max = 0;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (i = 0;s[i] !='\0';i++) {
			trav = (s[i] == '<' ? trav+1 : (s[i] == '>' ? trav-1 : trav));
			max = trav > max ? trav : max;
		}
		cout << max << '\n';
		max = 0;
		trav = 1;
	}
	return 0;
}

