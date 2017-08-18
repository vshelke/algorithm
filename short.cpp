#include <iostream>
#include <string>
#define ld long
using namespace std;

string compress(ld n) {
	string s = "";
	string ref = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	while (n) {
		s = s + ref[n%62];
		n = n / 62;
	}
	return s;
}

ld decompress(string s) {
	ld id = 0;
	for (int i = s.length()-1; i >= 0;i--) {
		if (s[i] >= 'a' && s[i] <= 'z')
			id = id*62 + s[i] - 'a';
		if (s[i] >= 'A' && s[i] <= 'Z')
			id = id*62 + s[i] - 'A' + 26;
		if (s[i] >= '0' && s[i] <= '9')
			id = id*62 + s[i] - '0' + 52;
	}
	return id;
}

int main() {
	ld i, passed = 0, failed = 0;
	for (i = 0;i<=10000000000;i++) {
		if (i == decompress(compress(i))) {
			cout << i << " - passed" << '\n';
			passed++;
		}else {
			cout << i << " - failed" << '\n';
			failed++;
		}
	}
	cout << "\n\ntotal passed: " << passed << "\ntotal failed: " << failed << '\n';
	return 0;
}