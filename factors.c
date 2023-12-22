#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *@argc: Counts the number of command-line arguments.
 *
 *@argv: An array of strings containing the command-line arguments.
 * Return: void
 */


int main(int argc, char *argv[])
{

	int number, i;
	FILE *fp = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		return (1);
	}

	if (fp == NULL)
	{
		perror("fopen");
		return (1);
	}


	while (fscanf(fp, "%d", &number) == 1)
	{
		for (i = 2; i * i <= number; i++)
		{
			if (number % i == 0)
			{
				int factor1 = i;

				int factor2 = number / i;

				printf("%d=%d*%d\n", number, factor1, factor2);
				break;
			}
		}
	}

	fclose(fp);
	return (0);
}
