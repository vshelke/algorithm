#include <iostream>
#include <string>
using namespace std;
string invert(string s){
	string a = "";
	for (int i= 0; s[i]!='\0';i++)
		a = a + (s[i] == '1' ? '0' : '1');
	return a;
}
int main() {
	string s = "0";
	for (int i = 1; i<=1000; i++ ) {
		s = s + invert(s);
	}
	cout << s;
	return 0;
}