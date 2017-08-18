#include <iostream>
#include <string>
using namespace std;

int spaces(string s) {
	int ctr = 0;
	for (int i = 0; s[i]!='\0';i++)
		if (s[i] == ' ')	ctr++;
	return ctr;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << spaces(s) << '\n';
	}
	return 0;
}