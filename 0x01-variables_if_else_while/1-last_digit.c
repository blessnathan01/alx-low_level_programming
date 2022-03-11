#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */
	if ((n%10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	else if ((n%10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, n%10);
	else
		printf("Last digit of %d is %d and is less than six and not 0\n", n, n%10);
	return (0);

}
