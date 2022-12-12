#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Main 'function' - output the sign of inserted int
 *
 * Return:  A value of 0 (success) 
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0){
		printf("number is zero\n");
	}
	else{
		if(n > 0){
			printf("number is positive\n");
		}
		else{ 
			if (n < 0){
				printf("number is negative\n");
			}
		}
	}
	return (0);
}
