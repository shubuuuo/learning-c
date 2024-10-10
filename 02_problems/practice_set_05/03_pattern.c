#include <stdio.h>

int pattern(int n);

int main()
{

    int n;
    printf("Today We are going to print a pattern & it is determined by the number you give.\n");
    printf("Enter the number: \n");
    scanf("%d", &n);
    pattern(n);

    return 0;
}

int pattern(int n)
{
    int i, j, k, choose;

    printf("Half Pyramid = 1\n");
    printf("Complete Pyramid = 2\n");
    scanf("%d", &choose);

    if (choose == 1)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (choose == 2)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            for (k = 0; k < (2 * i) + 1; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}