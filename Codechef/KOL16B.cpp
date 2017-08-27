#include <iostream>
#include <cmath>
using namespace std;

void decodeInteger(int n, int *a, int *b){
    int tmp;
	*b = n/65536;
    tmp = *b<<16;
    *a = n - tmp;
}


int main() {
    int a, b;
    decodeInteger(131079, &a, &b);
    cout << a << " " << b << '\n';

    cout << '\n';
    return 0;
}
