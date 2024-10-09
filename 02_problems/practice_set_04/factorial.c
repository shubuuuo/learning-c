#include<stdio.h>

int main() {

    int fac = 1;
    int i, number;
    printf("Today we are going to find the factorial of a given number provided by you. \n");

    printf("Enter the number: \n");
    scanf("%d", &number);

    // for (i = 1; i <= number; i++) {
    //     fac *= i;
    // }

    i = 1;
    while (i <= number)
    {
        fac *= i;
        i++;
    }
    
    printf("The factorial of %d is: %d", number, fac);
    
    return 0;
}
