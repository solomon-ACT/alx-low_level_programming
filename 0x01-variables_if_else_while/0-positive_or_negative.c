#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d", n);
	else if (n > 0)
		printf("%d", n);
	else
		printf("%d", n);
	return (n);
}
