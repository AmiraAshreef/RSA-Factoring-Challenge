#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	 FILE *fp;
	 int number;

    if (argc != 2)
{
        fprintf(stderr, "Usage: factors <file>\n");
        return 1;
    }


    fp = fopen(argv[1], "r");

    while (fscanf(fp, "%d", &number) == 1)
{
        int i;

        for (i = 2; i * i <= number; i++)
{

        }
    }

    fclose(fp);
    return (0);
}
