#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of a random number assigned to
 * int n
 * Return: returns 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* your code goes there */
	last_digit = n % 10;
	printf("%s%d%s%d ", "Last digit of ", n, " is ", last_digit);
	if (last_digit > 5)
		printf("%s", "and is greater than 5\n");
	else if (last_digit == 0)
		printf("%s", "and is 0\n");
	else if (last_digit < 6 && last_digit != 0)
		printf("%s", "and is less than 6 and not 0\n");
	return (0);
}
