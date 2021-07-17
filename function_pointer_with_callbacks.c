/* Program to understand function pointers, callback functions */

#include <stdio.h>

int addFunction(int a,int b) {

	return a+b;
}

int addFunction_cb(int (*ptr)(int,int)) {
	
	return ptr(34,56);

}

int main(void) {

	int (*ptr)(int,int) = &addFunction; /* Function pointer 'ptr' is pointing to addFunction */

	printf("%d\n",addFunction_cb(ptr)); /* A callback is called by passing fn ptr 'ptr' and invoking the addFunction */

	return 0;
}
