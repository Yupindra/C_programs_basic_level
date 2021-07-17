/* Program to check whether a number is an armstrong number(3 digits) or not
   Example:
	370 == 3^3 + 7^3 + 0^3
*/
#include <stdio.h>

int main(void) {

	int num,sum=0,rem=0;
	printf("Enter the number to perform armstrong number operation\n");
	scanf("%d",&num);
	int Arm_check_num = num;
	while (num!=0) {
		rem = num % 10;
		sum = sum + (rem*rem*rem);
		num = num / 10;
	}

	// Armstrong number check with an original user input number
	if (Arm_check_num == sum)
		printf("Armstrong number!\n");
	else
		printf("Not an Armstrong number\n");
	return 0;
}
