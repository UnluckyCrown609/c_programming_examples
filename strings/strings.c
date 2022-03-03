#include <stdio.h>

void main(){

	char mystring[11];
	sprintf(mystring, "Hello World!");

	printf("The string = %s\n", mystring);

	for(int a = 0; a < 12; a++){
		printf("%c\n",mystring[a]);
	}

	//notic how %s prints the whole string
	//%c only prints the character
}
