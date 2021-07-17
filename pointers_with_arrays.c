// Program to understand how pointers and multi dimensional arrays work
#include <stdio.h>

#ifdef ADDRESS
#undef ADDRESS
#else
#define VALUE
#endif
void two_dimensional_array(void){

/*
	2 1D array of 5 elements each

	1D array of 5 elements is of 20 bytes + 1D array of 5 elements is of 20 bytes = 40 bytes
*/	



	int arr[2][5] = { {1,2,3,4,5},
			{7,8,9,10,11}
		      };

//	int *p = arr  /* wrong */
	int (*p) [5] = arr;

	printf("val: %p at line: %d\n", *arr,__LINE__);
	printf("val: %p at line: %d\n", arr,__LINE__); 
	printf("val: %p at line: %d\n", arr+1, __LINE__);		
	printf("val: %p at line: %d\n", *(arr+1), __LINE__); 	
	printf("val: %p at line: %d\n", *(arr+1) +2, __LINE__);
	printf("val: %d at line: %d\n", *(*(arr+1)+2),__LINE__);
}
void one_dimensional_array(void) {
	/* Declaring an one-dimensional array */

	int arr[5] = {1,2,3,4,5}; /* One-dimensional array of 5 elements */

	int *ptr = arr; /*arr returns pointer to the first element in array */

#ifdef ADDRESS

	for(int i=0 ; i<5; i++)
		printf("val: %p at line %d\n",&arr[i],__LINE__);

	printf("val: %p at line: %d\n",arr,__LINE__);
	printf("val: %p at line: %d\n",arr+1,__LINE__);
	printf("val: %p at line: %d\n",arr+2,__LINE__);
	printf("val: %p at line: %d\n",arr+3,__LINE__);
	printf("val: %p at line: %d\n",arr+4,__LINE__);

#endif

#ifdef VALUE
	printf("val: %d at line: %d\n",*ptr,__LINE__);
	printf("val: %d at line: %d\n", *(ptr+1),__LINE__);
	printf("val: %d at line: %d\n", *(ptr+2),__LINE__);
	printf("val: %d at line: %d\n", *(ptr+3),__LINE__);
	printf("val: %d at line: %d\n", *(ptr+4),__LINE__);

#endif

}

int main(void) {

	one_dimensional_array();
	two_dimensional_array();
	return 0;

}

