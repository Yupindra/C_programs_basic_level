// Program to understand what an 'enum' does in the 'C' language

// A Preprocessor directive for text substituting the contents of std ip & op and boolean header file.

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define MAX 6 

// enum defintion with a typedef
typedef enum Days_of_week {
	Sun, 
	Mon, 
	Tue, 
	Wed, 
	Thurs, 
	Fri, 
	Sat
}Days_of_week_t; 

// function definition of type 'enum' with argument typecast to enum (by default it will be int)
enum Days_of_week find_days(Days_of_week_t day) {
	if (day <= MAX)
		return true;
	return false;
}

int main(void) {

	// 'enum' - user defined data-type used to assign names to integral constants, where 'names' make programs to read easily

	Days_of_week_t day_fetch = INT_MAX;	

	int get_user_day; 

	while(day_fetch > MAX){
		printf("Type in the day of user choice\n");
		scanf("%d", &get_user_day);
		day_fetch = get_user_day;
	}
	find_days(day_fetch) ? printf("Valid day\n") : printf("invalid_day\n");
	
	// Denotes the successful execution of a program	
	return 0;
}
