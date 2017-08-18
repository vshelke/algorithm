#include <iostream>
using namespace std;

int main() {
	void *val = 0;
	bool *b = (bool*)val;
	cout << *b;
	return 0;
}