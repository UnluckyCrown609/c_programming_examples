#include <stdio.h>

int add(int a, int b, int c){
	int sum;
	sum = a + b * c;
	return sum;
}

int main(){
	int result;

	result = add(4, 6, 13);
	printf("The adding result is %d\n", result);
}


