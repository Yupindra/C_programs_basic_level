/* Program to understand the pointers concept in 'c' language */
#include <stdio.h>
#ifdef DEBUG
#undef DEBUG
#else
#define MAN_DEBUG
#endif
int main (void) {

	char alpha = 'A'; 
	
	 /* A character pointer that holds the address of alpha or 
	    holds the address of a memory whose value can be accessed 
  	    as character through pointer (alpha_ptr)
	 */
	char *alpha_ptr = &alpha;

#if defined DEBUG
	printf("val: %p\n", alpha_ptr);
	printf("val: %p\n", &alpha);
	printf("val: %p\n", &alpha_ptr);
	printf("val: %c\n", *alpha_ptr);
#endif

	int *alpha_ptr_2 = (int *)&alpha;

#if defined DEBUG
	printf("val: %p\n", alpha_ptr_2);
        printf("val: %p\n", &alpha);
        printf("val: %p\n", &alpha_ptr_2);
        printf("val: %x\n", *alpha_ptr_2);
#endif

	int **alpha_ptr_3 = &alpha_ptr_2;

#if defined DEBUG
	printf("val: %p at line %d\n",alpha_ptr,__LINE__);
	printf("val: %p at line %d\n",alpha_ptr_2, __LINE__);
	printf("va;: %p at line %d\n",&alpha_ptr_2, __LINE__);
	printf("val: %p at line %d\n", alpha_ptr_3, __LINE__);
#endif	 

#ifdef MAN_DEBUG
	printf("val: %c at line %d\n",alpha,__LINE__);
	printf("val: %c at line %d\n", *alpha_ptr_2, __LINE__);
	printf("val: %c at line %d\n", **alpha_ptr_3, __LINE__);

#endif	
	return 0;
}
