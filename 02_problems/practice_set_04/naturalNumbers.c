#include <stdio.h>

int main()
{

    char choice;
    int origin, n, i;
    printf("Enter Which Example do you need: \n");
    scanf("%c", &choice);

    if (choice == 'a')
    {
        origin = 0;

        while (origin <= 20)
        {
            if (origin >= 10)
            {
                printf("The natural number is %d\n", origin);
            }
            origin++;
        }
    }
    else if (choice == 'b')
    {
        // increment-break-do-while-loop
        i = 0;
        printf("Enter the natural number till where you wanna print: \n");
        scanf("%d", &n);

        do
        {
            printf("Natural Number: %d\n", i);
            if (i == 5)
            {
                break;
            }

            i++;
        } while (i < n);
    }
    else if (choice == 'c')
    {
        // decrement-continue-do-while-loop
        n = 0;
        printf("Enter the natural number till where you wanna print: \n");
        scanf("%d", &i);

        do
        {
            printf("Natural Number: %d\n", i);
            if (n == 5)
            {
                continue;
            }

            i--;
        } while (i > n);
    }
    else if (choice == 'd')
    {
        // increment-break-do-while-loop
        printf("Enter the natural number till where you wanna print: \n");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("Natural Number: %d\n", i);
        }
        
    }
    

    return 0;
}