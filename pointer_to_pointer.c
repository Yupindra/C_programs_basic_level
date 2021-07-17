/* Program to understand pointer-to-pointer concept in c-language */
#include <stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

int main(void) {

	int var = 145;

	int *ptr1 = &var;

	int **ptr2 = &ptr1;

#ifdef DEBUG

	printf("val: %d at line %d\n",var,__LINE__);
	printf("val: %d at line %d\n",*ptr1,__LINE__);
	printf("val: %d at line %d\n",**ptr2,__LINE__);
#endif

	return 0;
}
