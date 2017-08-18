#include <iostream>
#include <string>
using namespace std;

/*
january = 73,
second = 62,
gain = 42,
represents = 103,
logic = 52, 
laughter = 83.
*/

int main() {
	string s[] = {"january", "second", "gain", "represents", "logic", "laughter"};
	int sum = 0;
	for (int i = 0;i<6;i++) {
		for (int j = 0; s[i][j] != '\0';j++)
			sum = sum + s[i][j];
		cout << s[i] << " " << sum << '\n';
		sum = 0;
	}
	return 0;
}