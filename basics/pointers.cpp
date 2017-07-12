// c basics
// dark sides
// understand hoe c compiler works
// pointer and structures
#include <iostream>
#include <limits>
#include <cstdio>
using namespace std;

int main() {
	// int a[10], x;
	// int *pa;
	// pa = a;
	// pa++;
	// cout << pa << '\n' << &a+1 << '\n';
	
	FILE *fp;
	fp = fopen("test", "r+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
	return 0;
}