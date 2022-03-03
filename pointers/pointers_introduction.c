#include <stdio.h>

void main (void){

 int a;
 int *ptr_to_a;

 ptr_to_a = &a;

 a = 5;

 printf ("The value of a is %d\n", a);

 *ptr_to_a = 6; // * is to point to the value of the registor

 printf ("The value of a is %d\n", a);
 printf ("The address value of ptr_to_a is %d\n", ptr_to_a); // points to the address value
 printf ("It stores the value %d\n", *ptr_to_a);
 printf ("The address of a is %d\n", &a); // & points to the registors address

}

