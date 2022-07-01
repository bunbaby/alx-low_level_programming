#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number and states whether it 
 * is positive, negative, or zero.
 *
 * Return:Alwaya 0.
 */
int main(void)
{
int n;

scrand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d id negative\n", n);
else
	printf("%d is zero\n", n);

return (0);
}
 
