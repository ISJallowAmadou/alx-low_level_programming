#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - Determines if a number is positive, negative or zero *
 
/* Return: Always 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
       	printf("%d\n", n);
	if (n > 0) 
	{
		printf("is positive\n");
  } 
	else if (n == 0) 
	{
		printf("is zero\n");
  } 
	else 
	{
		printf("is negative\n");
  }
	printf("\n");
	return (0);
}
