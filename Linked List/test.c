#include <stdio.h>
#include <stdlib.h>

int* test_it() {
	int a = 69,*tr;
	tr = &a;
	return tr;
}

int main() {
	int *tmp;
	tmp = test_it();
	printf("Masala = %d	-	value = %p",*tmp,tmp);
	return 0;
}	