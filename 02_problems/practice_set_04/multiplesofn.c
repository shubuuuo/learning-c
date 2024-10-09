#include <stdio.h>

int main()
{

    int choice, number, i, count, sum;

    printf("Straight Table => 1 & Reverse Table => 0\n");

    printf("Enter the number: \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Today we are going to find multiples of any number you provide\n");

        printf("Enter the number: \n");
        scanf("%d", &number);
        printf("Enter the count: \n");
        scanf("%d", &count);

        for (i = 0; i < count; i++)
        {
            printf("%d * %d = %d\n", number, i + 1, number * (i + 1));
        }
        sum = 0;
        for (i = 0; i < count; i++)
        {
            sum = sum + number * (i + 1);
        }
        printf("The sum of the results of multiples is: %d\n", sum);
    }
    else if (choice == 0)
    {
        printf("Today we are going to find multiples of any number you provide in reverse\n");

        printf("Enter the number: \n");
        scanf("%d", &number);
        printf("Enter the count from where you wanna start: \n");
        scanf("%d", &count);

        for (i = count; i >= 1; i--)
        {
            printf("%d * %d = %d\n", number, i, number * i);
        }
        sum = 0;
        for (i = count; i >= 1; i--)
        {
            sum = sum + number * i;
        }
        printf("The sum of the results of multiples is: %d\n", sum);
    }
    else
    {
        printf("Enter a valid value.");
    }

    return 0;
}