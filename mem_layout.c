/* Basic program to understand the memory layout of a general c-program source code
   This can be seen by executing a linux command (size "filename.o) in the shell
*/

#include <stdio.h>

/* This can be seen by executing a linux command (size "filename.o) in the shell*/

int global = 100; /* Initialized global variable consumes memory in the initialized data segment in the memory layout*/

int main(void) {
	static int g = 1000; /* Initialized static variables consume memory in the 'data' segment of the memory*/

	/*Note: Unintialized variables sre stored in the BSS segment of the memory*/

	return 0;
}
