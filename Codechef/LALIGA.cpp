#include <iostream>
#include <string>
using namespace std;
int main() {
	int b,e,m,r,s,t;
	cin >> t;
	while(t--) {
		for (int i =0 ; i<4 ; i++) {
			string tmp;
			cin >> tmp;
			cin >> s;
			if (tmp == "RealMadrid")	r = s;
			else if (tmp == "Malaga")	m = s;
			else if (tmp == "Barcelona")	b = s;
			else	e = s;
		}
		if (r - m <= 0 && e - b < 0)
			cout << "Barcelone\n";
		else
			cout << "RealMadrid\n"; 
		r = b = m = e = 0;
	}
	return 0;
}