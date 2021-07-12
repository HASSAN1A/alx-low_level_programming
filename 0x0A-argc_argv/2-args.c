#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
