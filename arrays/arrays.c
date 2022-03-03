#include <stdio.h>

void main(){

	int a[10];
	a[0] = 0;

	printf("a[0] = %d\n", a[0]);

	for (int b = 1; b < 10; b++){
		a[b] = a[b-1] + b;
		printf("a[%d] = %d\n", b, a[b]);
	}
}
