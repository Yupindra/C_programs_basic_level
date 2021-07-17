// Program to calculate the sum of the digits in a number

#include <stdio.h>
int main(void) {

	int num,rem,sum=0;
	printf("\nEnter the number for operation: \n");
	scanf("%d",&num);

	while(num) {
		
		rem = num%10;
		sum+=rem;
		num/=10;
	}
	printf("\nResult sum: %d\n",sum);
	return 0;
}
