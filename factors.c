#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
{
        fprintf(stderr, "Usage: factors <file>\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    int number;
    while (fscanf(fp, "%d", &number) == 1)
{
        for (int i = 2; i * i <= number; i++)
{
            if (number % i == 0)
{
                int factor1 = i;
                int factor2 = number / i;
                printf("%d=%d*%d\n", number, factor1, factor2);
                break; // Find only one factorization
            }
        }
    }

    fclose(fp);
    return (0);
}
